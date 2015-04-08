<div class="modal fade with-table-header-rotated" id="configure-networks" tabindex="-1" role="dialog" aria-labelledby="configure-networks-label" aria-hidden="true">
  <div class="modal-dialog">
    <div class="modal-content">
      <div class="modal-header">
        <button type="button" class="close" data-dismiss="modal" aria-hidden="true">
          <span class="pficon pficon-close"></span>
        </button>
        <h2 class="modal-title" id="configure-networks-label">Configure Networks</h2>
      </div>
      <div class="modal-body">
        <table class="table table-striped table-header-rotated">
          <thead>
            <tr>
              <th></th>
              <th colspan="6">Traffic Types</th>
            </tr>
            <tr>
              <!-- First column header is not rotated -->
              <th></th>
              <!-- Following headers are rotated -->
              <th class="rotate"><div><span>Column header 1</span></div></th>
              <th class="rotate"><div><span>Column header 2</span></div></th>
              <th class="rotate"><div><span>Column header 3</span></div></th>
              <th class="rotate"><div><span>Column header 4</span></div></th>
              <th class="rotate"><div><span>Column header 5</span></div></th>
              <th class="rotate"><div><span>Column header 6</span></div></th>
            </tr> 
          </thead>
          <tbody>
            <tr>
              <th>Subnets</th>
            </tr>
            <tr>
              <th class="row-header">Row header 1</th>
              <td><input checked="checked" name="column1[]" type="radio" value="row1-column1"></td>
              <td><input checked="checked" name="column2[]" type="radio" value="row1-column2"></td>
              <td><input name="column3[]" type="radio" value="row1-column3"></td>
              <td><input name="column4[]" type="radio" value="row1-column4"></td>
              <td><input name="column5[]" type="radio" value="row1-column5"></td>
              <td><input name="column6[]" type="radio" value="row1-column6"></td>
            </tr>
            <tr>
              <th class="row-header">Row header 2</th>
              <td><input name="column1[]" type="radio" value="row2-column1"></td>
              <td><input name="column2[]" type="radio" value="row2-column2"></td>
              <td><input checked="checked" name="column3[]" type="radio" value="row2-column3"></td>
              <td><input checked="checked" name="column4[]" type="radio" value="row2-column4"></td>
              <td><input name="column5[]" type="radio" value="row2-column5"></td>
              <td><input name="column6[]" type="radio" value="row2-column6"></td>
            </tr>
            <tr>
              <th class="row-header">Row header 3</th>
              <td><input name="column1[]" type="radio" value="row3-column1"></td>
              <td><input name="column2[]" type="radio" value="row3-column2"></td>
              <td><input name="column3[]" type="radio" value="row3-column3"></td>
              <td><input name="column4[]" type="radio" value="row3-column4"></td>
              <td><input checked="checked" name="column5[]" type="radio" value="row3-column5"></td>
              <td><input checked="checked" name="column6[]" type="radio" value="row3-column6"></td>
            </tr>
          </tbody>
        </table>
      </div>
      <div class="modal-footer">
        <button type="button" class="btn btn-default" data-dismiss="modal">Cancel</button>
        <button type="button" class="btn btn-primary">Configure Networks</button>
      </div>
    </div>
  </div>
</div>