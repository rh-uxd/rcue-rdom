    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="shortcut icon" href="../bower_components/rcue/dist/img/favicon.ico">
    <link href="../dist/css/rcue-rdom.min.css" rel="stylesheet" media="screen, print">
    <!-- HTML5 shim and Respond.js IE8 support of HTML5 elements and media queries -->
    <!--[if lt IE 9]>
    <script src="../bower_components/rcue/components/patternfly/components/html5shiv/dist/html5shiv.min.js"></script>
    <script src="../bower_components/rcue/components/patternfly/components/respond/dest/respond.min.js"></script>
    <![endif]-->
    <!-- IE8 requires jQuery and Bootstrap JS to load in head to prevent rendering bugs -->
    <!-- IE8 requires jQuery v1.x -->
    <script src="//code.jquery.com/jquery-1.10.2.min.js"></script>
    <script src="../bower_components/jquery-ui/jquery-ui.min.js"></script>
    <script>
      /*** Handle jQuery plugin naming conflict between jQuery UI and Bootstrap ***/
      $.widget.bridge('uibutton', $.ui.button);
      $.widget.bridge('uitooltip', $.ui.tooltip);
    </script>
    <script src="../bower_components/rcue/components/patternfly/components/bootstrap/dist/js/bootstrap.min.js"></script>
    <script src="../bower_components/rcue/components/patternfly/components/datatables/media/js/jquery.dataTables.js"></script>
    <script src="../bower_components/rcue/components/patternfly/components/bootstrap-select/bootstrap-select.min.js"></script>
    <script src="../bower_components/rcue/components/patternfly/dist/js/patternfly.min.js"></script>
    <script src="../dist/js/rcue-rdom.min.js"></script>