<div class="modal fade" id="register-nodes" tabindex="-1" role="dialog" aria-labelledby="register-nodes-label" aria-hidden="true">
  <div class="modal-dialog modal-lg">
    <div class="modal-content">
      <div class="modal-header">
        <button type="button" class="close" data-dismiss="modal" aria-hidden="true">
          <span class="pficon pficon-close"></span>
        </button>
        <h2 class="modal-title" id="register-nodes-label">Register Nodes</h2>
      </div>
      <div class="modal-body">
        <div class="row register-nodes-formset" id="formset-register_nodes">
          <div class="col-xs-5">
            <ul class="nav nav-tabs nav-node-registration" role="tablist" id="add-nodes">
              <li role="presentation" class="active">
                <a href="#upload-nodes" aria-controls="upload-nodes" role="tab" data-toggle="tab" title="Upload node">
                  <i class="fa fa-upload"></i>
                </a>
              </li>
              <li role="presentation">
                <a class="add-node-link" href="#" title="Add node">
                  <i class="fa fa-plus"></i>
                </a>
              </li>
            </ul>
            <h3 class="nodes-registered-count">2 Nodes</h3>
            <div class="tab-content">
              <div role="tabpanel" class="tab-pane active upload-nodes" id="upload-nodes">
                <form>
                  <div class="form-group required">
                    <input id="id_csv_file" name="csv_file" type="file">
                  </div>
                  <div class="form-group">
                    <button type="button" class="btn btn-sm btn-default">Cancel</button>
                    <button type="button" class="btn btn-sm btn-primary">Upload Nodes</button>
                  </div>
                </form>
              </div>
            </div>
            <ul class="nav nav-pills nav-stacked nav-registered-nodes">
              <li class="active">
                <a href="#tab-register_nodes-0" data-toggle="tab">Undefined node</a>
                <i class="fa fa-trash-o"></i>
              </li>
              <li class="">
                <a href="#tab-register_nodes-1" data-toggle="tab">Undefined node</a>
                <i class="fa fa-trash-o"></i>
              </li>
            </ul>
          </div>
          <form>
            <div class="col-xs-7">
              <div class="tab-content">
                <div class="tab-pane active" id="tab-register_nodes-0">
                  <h4>Node Detail</h4>
                  <div class="form-horizontal">
                    <fieldset>
                      <legend>Management</legend>
                      <div class="form-group required">
                        <label class="col-xs-4" for="id_register_nodes-0-driver">Driver</label>
                        <div class="col-xs-6">
                          <select class="form-control" id="id_register_nodes-0-driver" name="register_nodes-0-driver">
                            <option value="pxe_ipmitool">IPMI Driver</option>
                            <option value="pxe_ssh">PXE + SSH</option>
                          </select>
                        </div>
                        <div class="col-xs-2 muted"></div>
                      </div>
                      <div class="form-group required">
                        <label class="col-xs-4" for="id_register_nodes-0-ipmi_address">IP Address</label>
                        <div class="col-xs-6">
                          <input class="form-control" id="id_register_nodes-0-ipmi_address" name="register_nodes-0-ipmi_address" type="text">
                        </div>
                        <div class="col-xs-2 muted"></div>
                      </div>
                      <div class="form-group">
                        <label class="col-xs-4" for="id_register_nodes-0-ipmi_username">IPMI User</label>
                        <div class="col-xs-6">
                          <input class="form-control" id="id_register_nodes-0-ipmi_username" name="register_nodes-0-ipmi_username" type="text">
                        </div>
                        <div class="col-xs-2 muted"></div>
                      </div>
                      <div class="form-group">
                        <label class="col-xs-4" for="id_register_nodes-0-ipmi_password">IPMI Password</label>
                        <div class="col-xs-6">
                          <input class="form-control has-feedback" id="id_register_nodes-0-ipmi_password" name="register_nodes-0-ipmi_password" type="password">
                          <span class="form-control-feedback glyphicon glyphicon-eye-open"></span>
                        </div>
                        <div class="col-xs-2 muted"></div>
                      </div>
                    </fieldset>
                    <fieldset>
                      <legend>Networking</legend>
                      <div class="form-group required">
                        <label class="col-xs-4" for="id_register_nodes-0-mac_addresses">NIC MAC Address</label>
                        <div class="col-xs-6">
                          <textarea class="form-control" cols="40" id="id_register_nodes-0-mac_addresses" name="register_nodes-0-mac_addresses" placeholder="unspecified" rows="2"></textarea>
                        </div>
                        <div class="col-xs-2 muted"></div>
                      </div>
                    </fieldset>
                    <fieldset>
                      <legend>Hardware</legend>
                      <div class="form-group required">
                        <label class="col-xs-4" for="id_register_nodes-0-cpu_arch">Architecture</label>
                        <div class="col-xs-6">
                          <select class="form-control" id="id_register_nodes-0-cpu_arch" name="register_nodes-0-cpu_arch">
                            <option value="" selected="selected">unspecified</option>
                            <option value="amd64">amd64</option>
                            <option value="x86">x86</option>
                            <option value="x86_64">x86_64</option>
                          </select>
                        </div>
                        <div class="col-xs-2 muted"></div>
                      </div>
                      <div class="form-group required">
                        <label class="col-xs-4" for="id_register_nodes-0-cpus">CPUs</label>
                        <div class="col-xs-6">
                          <input class="form-control" id="id_register_nodes-0-cpus" name="register_nodes-0-cpus" placeholder="unspecified" type="number">
                        </div>
                        <div class="col-xs-2 muted">cores</div>
                      </div>
                      <div class="form-group required">
                        <label class="col-xs-4" for="id_register_nodes-0-memory_mb">Memory</label>
                        <div class="col-xs-6">
                          <input class="form-control" id="id_register_nodes-0-memory_mb" name="register_nodes-0-memory_mb" placeholder="unspecified" type="number">
                        </div>
                        <div class="col-xs-2 muted">MB</div>
                      </div>
                      <div class="form-group required">
                        <label class="col-xs-4" for="id_register_nodes-0-local_gb">Local Disk</label>
                        <div class="col-xs-6">
                          <input class="form-control" id="id_register_nodes-0-local_gb" name="register_nodes-0-local_gb" placeholder="unspecified" type="number">
                        </div>
                        <div class="col-xs-2 muted">GB</div>
                      </div>
                    </fieldset>
                  </div>
                </div>
                <div class="tab-pane" id="tab-register_nodes-1">
                  <h4>Node Detail</h4>
                  <div class="form-horizontal">
                    <fieldset>
                      <legend>Management</legend>
                      <div class="form-group required">
                        <label class="col-xs-4" for="id_register_nodes-1-driver">Driver</label>
                        <div class="col-xs-6">
                          <select class="form-control" id="id_register_nodes-1-driver" name="register_nodes-1-driver">
                            <option value="pxe_ipmitool">IPMI Driver</option>
                            <option value="pxe_ssh">PXE + SSH</option>
                          </select>
                        </div>
                        <div class="col-xs-2 muted"></div>
                      </div>
                      <div class="form-group required">
                        <label class="col-xs-4" for="id_register_nodes-1-ipmi_address">IP Address</label>
                        <div class="col-xs-6">
                          <input class="form-control" id="id_register_nodes-1-ipmi_address" name="register_nodes-1-ipmi_address" type="text">
                        </div>
                        <div class="col-xs-2 muted"></div>
                      </div>
                      <div class="form-group">
                        <label class="col-xs-4" for="id_register_nodes-1-ipmi_username">IPMI User</label>
                        <div class="col-xs-6">
                          <input class="form-control" id="id_register_nodes-1-ipmi_username" name="register_nodes-1-ipmi_username" type="text">
                        </div>
                        <div class="col-xs-2 muted"></div>
                      </div>
                      <div class="form-group">
                        <label class="col-xs-4" for="id_register_nodes-1-ipmi_password">IPMI Password</label>
                        <div class="col-xs-6">
                          <input class="form-control has-feedback" id="id_register_nodes-1-ipmi_password" name="register_nodes-1-ipmi_password" type="password">
                          <span class="form-control-feedback glyphicon glyphicon-eye-open"></span>
                        </div>
                        <div class="col-xs-2 muted"></div>
                      </div>
                    </fieldset>
                    <fieldset>
                      <legend>Networking</legend>
                      <div class="form-group required">
                        <label class="col-xs-4" for="id_register_nodes-1-mac_addresses">NIC MAC Address</label>
                        <div class="col-xs-6">
                          <textarea class="form-control" cols="40" id="id_register_nodes-1-mac_addresses" name="register_nodes-1-mac_addresses" placeholder="unspecified" rows="2"></textarea>
                        </div>
                        <div class="col-xs-2 muted"></div>
                      </div>
                    </fieldset>
                    <fieldset>
                      <legend>Hardware</legend>
                      <div class="form-group required">
                        <label class="col-xs-4" for="id_register_nodes-1-cpu_arch">Architecture</label>
                        <div class="col-xs-6">
                          <select class="form-control" id="id_register_nodes-1-cpu_arch" name="register_nodes-1-cpu_arch">
                            <option value="" selected="selected">unspecified</option>
                            <option value="amd64">amd64</option>
                            <option value="x86">x86</option>
                            <option value="x86_64">x86_64</option>
                          </select>
                        </div>
                        <div class="col-xs-2 muted"></div>
                      </div>
                      <div class="form-group required">
                        <label class="col-xs-4" for="id_register_nodes-1-cpus">CPUs</label>
                        <div class="col-xs-6">
                          <input class="form-control" id="id_register_nodes-1-cpus" name="register_nodes-1-cpus" placeholder="unspecified" type="number">
                        </div>
                        <div class="col-xs-2 muted">cores</div>
                      </div>
                      <div class="form-group required">
                        <label class="col-xs-4" for="id_register_nodes-1-memory_mb">Memory</label>
                        <div class="col-xs-6">
                          <input class="form-control" id="id_register_nodes-1-memory_mb" name="register_nodes-1-memory_mb" placeholder="unspecified" type="number">
                        </div>
                        <div class="col-xs-2 muted">MB</div>
                      </div>
                      <div class="form-group required">
                        <label class="col-xs-4" for="id_register_nodes-1-local_gb">Local Disk</label>
                        <div class="col-xs-6">
                          <input class="form-control" id="id_register_nodes-1-local_gb" name="register_nodes-1-local_gb" placeholder="unspecified" type="number">
                        </div>
                        <div class="col-xs-2 muted">GB</div>
                      </div>
                    </fieldset>
                  </div>
                </div>
              </div>
            </div>
          </form>
        </div>
      </div>
      <div class="modal-footer">
        <button type="button" class="btn btn-default" data-dismiss="modal">Cancel</button>
        <button type="button" class="btn btn-primary">Register Nodes</button>
      </div>
    </div>
  </div>
</div>