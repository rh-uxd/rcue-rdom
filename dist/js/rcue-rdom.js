// Red Hat Openstack Manager

jQuery(function () {
  // Initialize Tooltip
  jQuery('[data-toggle="tooltip"]').tooltip();
  // Initialize Boostrap-select
  jQuery('.selectpicker').selectpicker();
  // Make configured deployment roles draggable
  jQuery('.deployment-roles-assignable li:not(.role-unconfigured, .no-roles)').draggable({
    helper: 'clone',
    opacity: .75,
    revert: 'invalid',
    snap: '.role-target',
    snapMode: 'inner',
    zIndex: 1000
  });
  jQuery('.deployment-roles-unassigned').droppable({
    accept: '.deployment-roles li',
    activeClass: 'deployment-roles-active',
    hoverClass: 'deployment-roles-hover',
    tolerance: 'touch',
    drop: function (ev, ui) {
      ui.draggable.removeClass('role-assigned');
      ui.draggable.prependTo(jQuery(this));
      //jQuery('.deployment-roles-unassigned .no-roles').toggle();
    }
  });
  jQuery('.role-target').droppable({
    accept: '.deployment-roles li',
    activeClass: 'role-target-active',
    hoverClass: 'role-target-hover',
    tolerance: 'intersect',
    drop: function (ev, ui) {
      ui.draggable.addClass('role-assigned');
      ui.draggable.prependTo(jQuery(this).parent('.deployment-roles'));
    }
  });
  jQuery('.role-option.delete').click(function() {
    jQuery(this).parent('.role').removeClass('role-assigned');
    jQuery(this).parent('.role').appendTo('.deployment-roles-unassigned');
  });
});