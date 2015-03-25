// Red Hat Openstack Manager

$(function () {
  // Initialize Tooltip
  $('[data-toggle="tooltip"]').tooltip();
  // Initialize Boostrap-select
  $('.selectpicker').selectpicker();
  // Make configured deployment roles draggable
  $('.deployment-roles li:not(.role-unconfigured)').draggable();
})