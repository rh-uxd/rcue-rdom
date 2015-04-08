          <h2>Available Deployment Roles</h2>
          <ul class="deployment-roles deployment-roles-unassigned">
            <li class="role role-controller">
              <div class="deployment-role-label">
                Controller
              </div>
              <select class="selectpicker" id="role-controller-count">
                <option>1</option>
                <option>2</option>
                <option>3</option>
                <option>4</option>
                <option>5</option>
                <option>6</option>
                <option>7</option>
              </select>
              <a href="#" class="role-option delete">
                <i class="fa fa-times"></i>
              </a>
              <a href="#" class="role-option edit" data-toggle="modal" data-target="#deployment-role">
                <i class="fa fa-pencil"></i>
              </a>
            </li>
            <li class="role role-compute">
              <div class="deployment-role-label">
                Compute
              </div>
              <select class="selectpicker" id="role-compute-count">
                <option>1</option>
                <option>2</option>
                <option>3</option>
                <option>4</option>
                <option>5</option>
                <option>6</option>
                <option>7</option>
                <option>8</option>
                <option>9</option>
                <option>10</option>
                <option>11</option>
                <option>12</option>
              </select>
              <a href="#" class="role-option delete">
                <i class="fa fa-times"></i>
              </a>
              <a href="#" class="role-option edit" data-toggle="modal" data-target="#deployment-role">
                <i class="fa fa-pencil"></i>
              </a>
            </li>
            <li class="role role-block">
              <div class="deployment-role-label">
                Block Storage
              </div>
              <select class="selectpicker" id="role-block-count">
                <option>1</option>
                <option>2</option>
                <option>3</option>
                <option>4</option>
                <option>5</option>
              </select>
              <a href="#" class="role-option delete">
                <i class="fa fa-times"></i>
              </a>
              <a href="#" class="role-option edit" data-toggle="modal" data-target="#deployment-role">
                <i class="fa fa-pencil"></i>
              </a>
            </li>
            <!--/ remove 'role-unconfigured' class and i.pficon-help once configured -->
            <li class="role role-object role-unconfigured">
              <i class="pficon pficon-help" data-toggle="tooltip" data-placement="bottom" title="Please edit this role to fill out any necessary missing configuration."></i>
              <div class="deployment-role-label">
                Object Storage
              </div>
              <select class="selectpicker" id="role-object-count">
                <option>1</option>
                <option>2</option>
                <option>3</option>
                <option>4</option>
                <option>5</option>
              </select>
              <a href="#" class="role-option delete">
                <i class="fa fa-times"></i>
              </a>
              <a href="#" class="role-option edit" data-toggle="modal" data-target="#deployment-role">
                <i class="fa fa-pencil"></i>
              </a>
            </li>
          </ul>