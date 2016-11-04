<?php
/************************************************************************/
/* NPDS DUNE : Net Portal Dynamic System .                              */
/* ===========================                                          */
/*                                                                      */
/* This version name NPDS Copyright (c) 2001-2015 by Philippe Brunier   */
/*                                                                      */
/* This program is free software. You can redistribute it and/or modify */
/* it under the terms of the GNU General Public License as published by */
/* the Free Software Foundation; either version 2 of the License.       */
/************************************************************************/
echo '

<link rel="stylesheet" href="themes/NBOR/style/rocssti-fr.css">

<link rel="stylesheet" type="text/css" href="http://fonts.googleapis.com/css?family=Open+Sans:400,700)">
<link rel="stylesheet" href="lib/bootstrap-table/dist/bootstrap-table.css" />
<link rel="stylesheet" href="themes/NBOR/responsivetab/css/easy-responsive-tabs.css" />

<link id="sty_highlight" rel="stylesheet" href="lib/js/highlight-9.0.0/styles/github.css" />

<script type="text/javascript" src="lib/js/jquery.min.js"></script>
<script type="text/javascript" src="themes/NBOR/responsivetab/js/easyResponsiveTabs.js"></script>

<script type="text/javascript" src="lib/js/tether.min.js"></script>
<script type="text/javascript" src="lib/bootstrap/dist/js/bootstrap.js"></script>
<script type="text/javascript" src="lib/js/highlight-9.0.0/highlight.pack.js"></script>

<script type="text/javascript" src="lib/bootstrap-table/dist/bootstrap-table.js"></script>
<script type="text/javascript" src="lib/bootstrap-table/dist/locale/bootstrap-table-'.language_iso(1,"-",1).'.min.js"></script>
<script type="text/javascript" src="lib/bootstrap-table/dist/extensions/mobile/bootstrap-table-mobile.min.js"></script>
<script type="text/javascript" src="lib/bootstrap-table/dist/extensions/export/bootstrap-table-export.min.js"></script>
<script type="text/javascript" src="lib/tableExport.jquery.plugin-master/tableExport.js"></script>
<script type="text/javascript" src="lib/formvalidation/dist/js/formValidation.min.js"></script>
<script type="text/javascript" src="lib/formvalidation/dist/js/language/'.language_iso(1,"_",1).'.js"></script>
<script type="text/javascript" src="lib/formvalidation/dist/js/framework/bootstrap4.min.js"></script>
<script type="text/javascript" src="lib/js/js.cookie.js"></script>
<script type="text/javascript" src="lib/js/jquery-ui.min.js"></script>
<script type="text/javascript" src="lib/js/bootbox.min.js"></script>
<script type="text/javascript" src="lib/js/checkfieldinp.js"></script>
<script type="text/javascript" src="lib/bootstrap-datepicker/dist/js/bootstrap-datepicker.min.js"></script>
<script type="text/javascript" src="lib/bootstrap-datepicker/dist/locales/bootstrap-datepicker.'.language_iso(1,"","").'.min.js"></script>

';



?>

	<script type="text/javascript">
    $(document).ready(function() {
        //Horizontal Tab
        $('#parentHorizontalTab').easyResponsiveTabs({
            type: 'default', //Types: default, vertical, accordion
            width: 'auto', //auto or any width like 600px
            fit: true, // 100% fit in a container
            tabidentify: 'hor_1', // The tab groups identifier
            activate: function(event) { // Callback function if tab is switched
                var $tab = $(this);
                var $info = $('#nested-tabInfo');
                var $name = $('span', $info);
                $name.text($tab.text());
                $info.show();
            }
        });

        // Child Tab
        $('#ChildVerticalTab_1').easyResponsiveTabs({
            type: 'vertical',
            width: 'auto',
            fit: true,
            tabidentify: 'ver_1', // The tab groups identifier
            activetab_bg: '#fff', // background color for active tabs in this group
            inactive_bg: '#F5F5F5', // background color for inactive tabs in this group
            active_border_color: '#c1c1c1', // border color for active tabs heads in this group
            active_content_border_color: '#6f8343' // border color for active tabs contect in this group so that it matches the tab head border
        });

        //Vertical Tab
        $('#parentVerticalTab').easyResponsiveTabs({
            type: 'vertical', //Types: default, vertical, accordion
            width: 'auto', //auto or any width like 600px
            fit: true, // 100% fit in a container
            closed: 'accordion', // Start closed if in accordion view
            tabidentify: 'hor_1', // The tab groups identifier
            activate: function(event) { // Callback function if tab is switched
                var $tab = $(this);
                var $info = $('#nested-tabInfo2');
                var $name = $('span', $info);
                $name.text($tab.text());
                $info.show();
            }
        });
    });
</script>