// Red Hat Openstack Manager

jQuery(function () {
  // Initialize Tooltip
  jQuery('[data-toggle="tooltip"]').tooltip();
  // Initialize Boostrap-select
  jQuery('.selectpicker').selectpicker();
  // Make configured deployment roles draggable
  jQuery('.deployment-roles li:not(.role-unconfigured)').draggable({ 
    stack: ".deployment-roles li"
  });
  // Make .role
  jQuery('.role-target').droppable({
    drop: function( event, ui ) {
      jQuery(this).addClass('ui-state-highlight')
    }
  });
})