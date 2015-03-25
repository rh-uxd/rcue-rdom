/*global module,require*/
var lrSnippet = require('connect-livereload')({
  port: 35731
});
var mountFolder = function (connect, dir) {
  return connect.static(require('path').resolve(dir));
};

module.exports = function (grunt) {
  // load all grunt tasks
  require('matchdep').filterDev('grunt-*').forEach(grunt.loadNpmTasks);

  // configurable paths
  var projectConfig = {
    dist: 'dist',
    src: ''
  };

  try {
    projectConfig.src = require('./bower.json').appPath || projectConfig.src;
  } catch (e) {}

  grunt.initConfig({
    clean: {
      build: '<%= config.dist %>'
    },
    config: projectConfig,
    connect: {
      server: {
        options: {
          hostname: '0.0.0.0',
          middleware: function (connect) {
            return [
              lrSnippet,
              mountFolder(connect, projectConfig.src),
              mountFolder(connect, projectConfig.src + 'dist/html')
            ];
          },
          port: 9002
        }
      }
    },
    less: {
      development: {
        files: {
          "dist/css/rcue-rdom.css": "less/rcue-rdom.less"
        },
        options: {
          paths: ["less/"]
        }
      },
      production: {
        files: {
          "dist/css/rcue-rdom.min.css": "less/rcue-rdom.less"
        },
        options: {
          cleancss: true,
          paths: ["less/"]
        }
      }
    },
    ssi: {
      options: {
        cache: 'all'
      },
      html: {
        expand: true,
        src: ['html/*.html'],
        dest: 'dist/',
      },
    },
    uglify: {
      options: {
        mangle: false
      },
      production: {
        files: {
          'dist/js/rcue-rdom.min.js': ['dist/js/rcue-rdom.js']
        }
      }
    },
    watch: {
      css: {
        files: 'less/*.less',
        tasks: ['less']
      },
      js: {
        files: ['dist/js/*.js', '!dist/js/*.min.js'],
        tasks: ['uglify']
      },
      livereload: {
        files: [
          'dist/css/*.css',
          'dist/html/*.html',
          '!html/*.html'
        ]
      },
      options: {
        livereload: 35731
      },
      ssi: {
        files: ['html/*.html', 'html/_inc/*.inc'],
        tasks: ['ssi']
      }
    }
  });

  grunt.registerTask('build', [
    'less',
    'ssi',
    'uglify'
  ]);

  grunt.registerTask('server', [
    'connect:server',
    'watch'
  ]);

  grunt.registerTask('default', ['build']);
};
