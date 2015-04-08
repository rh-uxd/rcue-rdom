<div class="modal fade" id="deployment-role" tabindex="-1" role="dialog" aria-labelledby="deployment-role-label" aria-hidden="true">
  <div class="modal-dialog modal-lg">
    <form>
      <div class="modal-content">
        <div class="modal-header">
          <button type="button" class="close" data-dismiss="modal" aria-hidden="true">
            <span class="pficon pficon-close"></span>
          </button>
          <h2 class="modal-title" id="deployment-role-label">Edit Deployment Role</h2>
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
                <div class="form-horizontal">
                  <div class="form-group required">
                    <label class="col-sm-4 control-label" for="overall-settings-name">Name</label>
                    <div class="col-sm-8">
                      <input type="text" id="overall-settings-name" class="form-control">
                    </div>
                  </div>
                  <div class="form-group">
                    <label class="col-sm-4 control-label" for="overall-settings-description">Description</label>
                    <div class="col-sm-8">
                      <textarea rows="2" id="overall-settings-description" class="form-control"></textarea>
                    </div>
                  </div>
                  <div class="form-group required">
                    <label class="col-sm-4 control-label" for="overall-settings-provisioning-image">Provisioning Image</label>
                    <div class="col-sm-8">
                      <select id="overall-settings-provisioning-image" class="form-control selectpicker">
                        <option value="" disabled selected>Select Provisioning Image</option>
                        <option>Provisioning Image 1</option>
                        <option>Provisioning Image 2</option>
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
                </div>
              </div>
              <div role="tabpanel" class="tab-pane" id="service-configuration">
                <div class="row">
                  <div class="col-md-6">
                    <div class="form-horizontal">
                      <div class="form-group required">
                        <label class="col-sm-4 control-label">
                          Setting 1
                          <i class="pficon pficon-help" data-toggle="tooltip" data-placement="top" title="Setting 1 tooltip info"></i>
                        </label>
                        <div class="col-sm-8">
                          <label class="radio-inline">
                            <input type="radio" name="service-configuration-radios-1" id="service-configuration-radio-1" value="value1" checked> Value 1
                          </label>
                          <label class="radio-inline">
                            <input type="radio" name="service-configuration-radios-1" id="service-configuration-radio-2" value="value2"> Value 2
                          </label>
                        </div>
                      </div>
                      <div class="form-group required">
                        <label class="col-sm-4 control-label" for="service-configuration-setting-2">
                          Setting 2
                          <i class="pficon pficon-help" data-toggle="tooltip" data-placement="top" title="Setting 2 tooltip info"></i>
                        </label>
                        <div class="col-sm-8">
                          <input type="text" id="service-configuration-setting-2" class="form-control">
                        </div>
                      </div>
                      <div class="form-group required">
                        <label class="col-sm-4 control-label" for="service-configuration-setting-3">
                          Setting 3
                          <i class="pficon pficon-help" data-toggle="tooltip" data-placement="top" title="Setting 3 tooltip info"></i>
                        </label>
                        <div class="col-sm-8">
                          <input type="text" id="service-configuration-setting-3" class="form-control">
                        </div>
                      </div>
                      <div class="form-group required">
                        <label class="col-sm-4 control-label" for="service-configuration-setting-4">
                          Setting 4
                          <i class="pficon pficon-help" data-toggle="tooltip" data-placement="top" title="Setting 4 tooltip info"></i>
                        </label>
                        <div class="col-sm-8">
                          <select id="service-configuration-setting-4" class="form-control selectpicker">
                            <option selected>value</option>
                            <option>value 2</option>
                          </select>
                        </div>
                      </div>
                      <div class="form-group required">
                        <label class="col-sm-4 control-label" for="service-configuration-setting-5">
                          Setting 5
                          <i class="pficon pficon-help" data-toggle="tooltip" data-placement="top" title="Setting 5 tooltip info"></i>
                        </label>
                        <div class="col-sm-8">
                          <input type="text" id="service-configuration-setting-5" class="form-control">
                        </div>
                      </div>
                      <div class="form-group required">
                        <label class="col-sm-4 control-label" for="service-configuration-setting-6">
                          Setting 6
                          <i class="pficon pficon-help" data-toggle="tooltip" data-placement="top" title="Setting 6 tooltip info"></i>
                        </label>
                        <div class="col-sm-8">
                          <input type="text" id="service-configuration-setting-6" class="form-control">
                        </div>
                      </div>
                    </div>
                  </div>
                  <div class="col-md-6">
                    <div class="form-horizontal">
                      <div class="form-group required">
                        <label class="col-sm-4 control-label">
                          Setting 7
                          <i class="pficon pficon-help" data-toggle="tooltip" data-placement="top" title="Setting 7 tooltip info"></i>
                        </label>
                        <div class="col-sm-8">
                          <label class="radio-inline">
                            <input type="radio" name="service-configuration-radios-2" id="service-configuration-radio-3" value="value1" checked> Value 1
                          </label>
                          <label class="radio-inline">
                            <input type="radio" name="service-configuration-radios-2" id="service-configuration-radio-4" value="value2"> Value 2
                          </label>
                        </div>
                      </div>
                      <div class="form-group required">
                        <label class="col-sm-4 control-label" for="service-configuration-setting-8">
                          Setting 8
                          <i class="pficon pficon-help" data-toggle="tooltip" data-placement="top" title="Setting 8 tooltip info"></i>
                        </label>
                        <div class="col-sm-8">
                          <input type="text" id="service-configuration-setting-8" class="form-control">
                        </div>
                      </div>
                      <div class="form-group required">
                        <label class="col-sm-4 control-label" for="service-configuration-setting-9">
                          Setting 9
                          <i class="pficon pficon-help" data-toggle="tooltip" data-placement="top" title="Setting 9 tooltip info"></i>
                        </label>
                        <div class="col-sm-8">
                          <input type="text" id="service-configuration-setting-9" class="form-control">
                        </div>
                      </div>
                      <div class="form-group required">
                        <label class="col-sm-4 control-label" for="service-configuration-setting-10">
                          Setting 10
                          <i class="pficon pficon-help" data-toggle="tooltip" data-placement="top" title="Setting 10 tooltip info"></i>
                        </label>
                        <div class="col-sm-8">
                          <select id="service-configuration-setting-10" class="form-control selectpicker">
                            <option selected>value</option>
                            <option>value 2</option>
                          </select>
                        </div>
                      </div>
                      <div class="form-group required">
                        <label class="col-sm-4 control-label" for="service-configuration-setting-11">
                          Setting 11
                          <i class="pficon pficon-help" data-toggle="tooltip" data-placement="top" title="Setting 11 tooltip info"></i>
                        </label>
                        <div class="col-sm-8">
                          <input type="text" id="service-configuration-setting-11" class="form-control">
                        </div>
                      </div>
                      <div class="form-group required">
                        <label class="col-sm-4 control-label" for="service-configuration-setting-12">
                          Setting 12
                          <i class="pficon pficon-help" data-toggle="tooltip" data-placement="top" title="Setting 12 tooltip info"></i>
                        </label>
                        <div class="col-sm-8">
                          <input type="text" id="service-configuration-setting-12" class="form-control">
                        </div>
                      </div>
                    </div>
                  </div>
                </div>
                <div class="panel-group" id="service-configuration-advanced-settings" role="tablist" aria-multiselectable="false">
                  <div class="panel panel-default">
                    <div class="panel-heading" role="tab" id="headingOne">
                      <h2 class="panel-title h5">
                        <a data-toggle="collapse" data-parent="#service-configuration-advanced-settings" href="#collapseOne" aria-expanded="false" aria-controls="collapseOne" class="collapsed">
                          Advanced Settings
                        </a>
                      </h2>
                    </div>
                    <div id="collapseOne" class="panel-collapse collapse" role="tabpanel" aria-labelledby="headingOne">
                      <div class="panel-body">
                        <div class="row">
                          <div class="col-md-6">
                            <div class="form-horizontal">
                              <div class="form-group required">
                                <label class="col-sm-4 control-label">
                                  Setting 13
                                  <i class="pficon pficon-help" data-toggle="tooltip" data-placement="top" title="Setting 13 tooltip info"></i>
                                </label>
                                <div class="col-sm-8">
                                  <label class="radio-inline">
                                    <input type="radio" name="service-configuration-radios-3" id="service-configuration-radio-5" value="value1" checked> Value 1
                                  </label>
                                  <label class="radio-inline">
                                    <input type="radio" name="service-configuration-radios-3" id="service-configuration-radio-6" value="value2"> Value 2
                                  </label>
                                </div>
                              </div>
                              <div class="form-group required">
                                <label class="col-sm-4 control-label" for="service-configuration-setting-14">
                                  Setting 14
                                  <i class="pficon pficon-help" data-toggle="tooltip" data-placement="top" title="Setting 14 tooltip info"></i>
                                </label>
                                <div class="col-sm-8">
                                  <input type="text" id="service-configuration-setting-14" class="form-control">
                                </div>
                              </div>
                              <div class="form-group required">
                                <label class="col-sm-4 control-label" for="service-configuration-setting-15">
                                  Setting 15
                                  <i class="pficon pficon-help" data-toggle="tooltip" data-placement="top" title="Setting 15 tooltip info"></i>
                                </label>
                                <div class="col-sm-8">
                                  <input type="text" id="service-configuration-setting-15" class="form-control">
                                </div>
                              </div>
                            </div>
                          </div>
                          <div class="col-md-6">
                            <div class="form-horizontal">
                              <div class="form-group required">
                                <label class="col-sm-4 control-label">
                                  Setting 16
                                  <i class="pficon pficon-help" data-toggle="tooltip" data-placement="top" title="Setting 16 tooltip info"></i>
                                </label>
                                <div class="col-sm-8">
                                  <label class="radio-inline">
                                    <input type="radio" name="service-configuration-radios-4" id="service-configuration-radio-7" value="value1" checked> Value 1
                                  </label>
                                  <label class="radio-inline">
                                    <input type="radio" name="service-configuration-radios-4" id="service-configuration-radio-8" value="value2"> Value 2
                                  </label>
                                </div>
                              </div>
                              <div class="form-group required">
                                <label class="col-sm-4 control-label" for="service-configuration-setting-17">
                                  Setting 17
                                  <i class="pficon pficon-help" data-toggle="tooltip" data-placement="top" title="Setting 17 tooltip info"></i>
                                </label>
                                <div class="col-sm-8">
                                  <input type="text" id="service-configuration-setting-17" class="form-control">
                                </div>
                              </div>
                            </div>
                          </div>
                        </div>
                      </div>
                    </div>
                  </div>
                </div>
              </div>
            </div>
          </div>
          <div class="modal-footer">
            <button type="button" class="btn btn-default" data-dismiss="modal">Cancel</button>
            <button type="button" class="btn btn-primary">Save</button>
          </div>
      </div>
    </form>
  </div>
</div>