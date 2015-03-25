<div class="modal fade" id="deployment-role" tabindex="-1" role="dialog" aria-labelledby="deployment-role-label" aria-hidden="true">
  <div class="modal-dialog">
    <div class="modal-content">
      <div class="modal-header">
        <button type="button" class="close" data-dismiss="modal" aria-hidden="true">
          <span class="pficon pficon-close"></span>
        </button>
        <h4 class="modal-title" id="deployment-role-label">Edit Deployment Role</h4>
      </div>
      <div class="modal-body">
        <ul class="nav nav-tabs nav-tabs-pf" role="tablist">
          <li role="presentation" class="active">
            <a href="#overall-settings" aria-controls="overall-settings" role="tab" data-toggle="tab">Overall Settings</a>
          </li>
          <li role="presentation">
            <a href="#service-configuration" aria-controls="service-configuration" role="tab" data-toggle="tab">Service Configuration</a>
          </li>
        </ul>
        <div class="tab-content">
          <div role="tabpanel" class="tab-pane active" id="overall-settings">
            <form class="form-horizontal">
              <div class="form-group">
                <label class="col-sm-4 control-label" for="overall-settings-name">Name *</label>
                <div class="col-sm-8">
                  <input type="text" id="overall-settings-name" class="form-control"></div>
              </div>
              <div class="form-group">
                <label class="col-sm-4 control-label" for="overall-settings-description">Description</label>
                <div class="col-sm-8">
                  <textarea rows="2" id="overall-settings-description" class="form-control"></textarea>
                </div>
              </div>
              <div class="form-group">
                <label class="col-sm-4 control-label" for="overall-settings-provisioning-image">Provisioning Image *</label>
                <div class="col-sm-8">
                  <select id="overall-settings-provisioning-image" class="form-control selectpicker">
                    <option value="" disabled selected>Select Provisioning Image</option>
                    <option>Provisioning Image 1</option>
                    <option>Provisioning Image 2</option>
                  </select>
                </div>
              </div>
              <div class="form-group">
                <label class="col-sm-4 control-label" for="overall-settings-ready-state">Ready State *</label>
                <div class="col-sm-8">
                  <select id="overall-settings-ready-state" class="form-control selectpicker">
                    <option>Default Ready State</option>
                    <option>Other Ready State</option>
                  </select>
                </div>
              </div>
              <div class="form-group">
                <label class="col-sm-4 control-label" for="overall-settings-node-profile">Node Profile</label>
                <div class="col-sm-8">
                  <select id="overall-settings-node-profile" class="form-control selectpicker">
                    <option value="" disabled selected>Select Node Profile</option>
                    <option>Node Profile 1</option>
                  </select>
                </div>
              </div>
              <div class="form-group">
                <label class="col-sm-4 control-label" for="overall-settings-number-of-nodes">Number of Nodes</label>
                <div class="col-sm-8">
                  <input type="text" id="overall-settings-number-of-nodes" class="form-control">
                </div>
              </div>
            </form>
          </div>
          <div role="tabpanel" class="tab-pane" id="service-configuration">
            [service configuration form goes here]
          </div>
        </div>
      </div>
      <div class="modal-footer">
        <button type="button" class="btn btn-default" data-dismiss="modal">Cancel</button>
        <button type="button" class="btn btn-primary">Save</button>
      </div>
    </div>
  </div>
</div>