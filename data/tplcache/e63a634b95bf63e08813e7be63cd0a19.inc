<li class="tab2 drop-menu-effect"><a href="{dede:field name='typeurl'/}" class="s-navli">{dede:field name='typename'/}</a>
            <ul class="submenu">
              {dede:channel type='son' noself='yes'}
              <li><a href="[field:typeurl/]">[field:typename/]</a></li>
              {/dede:channel}
            </ul>
          </li>