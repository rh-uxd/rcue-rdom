          <h2>Available Deployment Roles</h2>
          <ul class="deployment-roles">
            <li class="role-controller">
              <div class="deployement-role-label">
                Controller
              </div>
              <select id="role-controller-count">
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
              <a href="#" class="role-option configure">
                <i class="fa fa-cogs"></i>
              </a>
            </li>
            <li class="role-compute">
              <div class="deployement-role-label">
                Compute
              </div>
              <select id="role-compute-count">
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
              <a href="#" class="role-option configure">
                <i class="fa fa-cogs"></i>
              </a>
            </li>
            <li class="role-block">
              <div class="deployement-role-label">
                Block Storage
              </div>
              <select id="role-block-count">
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
              <a href="#" class="role-option configure">
                <i class="fa fa-cogs"></i>
              </a>
            </li>
            <!--/ remove 'role-unconfigured' class and i.pficon-help once configured -->
            <li class="role-object role-unconfigured">
              <i class="pficon pficon-help" data-toggle="tooltip" data-placement="bottom" title="Please edit this role to fill out any necessary missing configuration."></i>
              <div class="deployement-role-label">
                Object Storage
              </div>
              <select id="role-block-count">
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
              <a href="#" class="role-option configure">
                <i class="fa fa-cogs"></i>
              </a>
            </li>
          </ul>