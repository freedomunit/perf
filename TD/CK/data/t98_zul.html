
	zk.afterLoad('zss', function () {
		var oldMethod = {};
		zk.override(zss.TopPanel.prototype, oldMethod, { 
		_updateBlockWidth: function () {
			if (!this.block) return;
				var width = this.width,
				leftpos = this.leftpos,
				leftpad = this.leftpad;
				// ZSS-1281: grey area; side effect of fixing ZSS-1117; revert
				width = width - (leftpos ? leftpos : 0) - (leftpad ? leftpad : 0); 
			if (width < 0) width = 0;
				jq(this.block.comp).css('width', jq.px0(width));
			}, 
		});
		zk.override(zss.LeftPanel.prototype, oldMethod, { 
		_updateBlockHeight: function () {
			if (!this.block) return;
				var height = this.height,
				toppos = this.toppos,
				toppad = this.toppad;
				// ZSS-1281: grey area; side effect of fixing ZSS-1117; revert
				height = height - (toppos ? toppos : 0) - (toppad ? toppad : 0);
			if (height < 0) height = 0;
				jq(this.block.comp).css('height', jq.px0(height));
			},
		}); 
	});

zk.afterMount(function(){
	jq(function(){
		
		jq('body').on( 'mouseenter', '.zscelltxt-real a.imgpu', function(evt){ 
			evt.preventDefault();
		 	var img = $(this).data('img');
		 	if (img !== '/bin-java/efsnPackage.do_loadImage?imageurl=null') {
		 	     var img = $(this).data('img');
		 	}else{
		 		var img = '/images/common/noswatchimage.gif'
		 	}
		 			
	     jq(this).data('timeout', setTimeout(function () {
	      	jq('body').append($('<div id="pui"><img src="'+img+'" /></div>'));
				jq('#pui').css({left:evt.pageX+15,top:evt.pageY+15}); 
				
				var onscreen = $('#pui').visible(), 
		           offhoriz    = $('#pui').visible( false, false, 'horizontal' ),
		           offvert     = $('#pui').visible( false, false, 'vertical' );
		           onscreen||(w=$("#pui").outerWidth()+25,x=evt.pageX+15,ww=x-w,h=$("#pui").outerHeight()+25,y=evt.pageY+15,hh=y-h,offhoriz||offvert?offvert?$("#pui").css({left:ww}):$("#pui").css({top:hh}):$("#pui").css({left:ww,top:hh}));

	    	}, 500)); 
	    }).on('mouseleave', '.zscelltxt-real a.imgpu', function(){
	    	clearTimeout(jq(this).data('timeout'));
	        jq('#pui').remove();
	   	}).on('click', '.zscelltxt-real a.imgpu', function(evt){
	   		evt.preventDefault();
	   	});
		
		jq("body").on( 'click', '.zssheettab', function() {	
			jq('$partialdropdowncontainer').css('display','none');
		});	

		jq("body").on( 'click', '.cfb', function() {	
			zk.Widget.$(jq(this).closest('table').find('.formula').val(jq(this).closest('table').find('.formula').val()+$(this).html().replace('&lt;','<').replace('&gt;', '>')));
		});
		
		jq( window ).resize(function() {
			   jq(".udwrap").each(function() {
			      if ( jq(this).height() < 100) {
			        jq(this).find('.udb').css('display','none');
			      }else{
			        jq(this).find('.udb').css('display','block');
			      }
				});
			}).trigger( "resize" );
		
		var d = new Date();
		var day = d.getDate();
		var now = ((''+day).length<2 ? '0' : '') + day;
		$('<style>.IconMonths-OC:before{content:"'+now+'"}</style>').appendTo('head');
		
		setTimeout(function() {
			jq(window).trigger('resize');
		}, 10);
		tabcolor();	
		
		jq('$pspreadsheet').on( 'click', '.zssheettab', function() {
			tabcolor();
			});
		
		jq("body").on( 'click', '.z-tab', function() {
			setTimeout(function() {
				jq(window).trigger('resize');
			}, 10);
		});
	});
}); 

function ved(d,e,v,df){
	
	jq('body').on('click', '.securlistbox input.z-textbox-readonly', function(){
		$(this).blur();	
	}).on('click', '.securlistbox input:not(.ed).view:not(.z-textbox-readonly)', function(){
		$(this).removeClass( "deny view" ).addClass( "edit" ).val(e).blur();
		if($(this).hasClass('MP')){
			$(this).closest('tr').find('.MPS').prop('readonly', false).removeClass( "z-textbox-readonly" ).val(d).blur();
		};	
	}).on('click', '.securlistbox input:not(.ed).edit:not(.z-textbox-readonly)', function(){
		$(this).removeClass( "edit view" ).addClass( "deny" ).val(d).blur();	
		if($(this).hasClass('MP')){
			$(this).closest('tr').find('.MPS').removeClass( "edit" ).prop('readonly', true).addClass("deny z-textbox-readonly").val(d).blur();
		};					    		
		}).on('click', '.securlistbox input:not(.ed).deny:not(.z-textbox-readonly)', function(){  
  		$(this).removeClass( "deny edit" ).addClass( "view" ).val(v).blur();		
  		if($(this).hasClass('MP')){
			$(this).closest('tr').find('.MPS').removeClass( "edit" ).prop('readonly', true).addClass("deny z-textbox-readonly").val(d).blur();
		}; 		
		}).on('click', '.securlistbox input.ed.deny:not(.z-textbox-readonly)', function(){
 		$(this).removeClass( "deny" ).addClass( "edit" ).val(e).blur();
 		
	}).on('click', '.securlistbox input.ed.edit:not(.z-textbox-readonly)', function(){ 
    	$(this).removeClass( "edit" ).addClass( "deny" ).val(d).blur();
    	
	});

	
	
	
	
	jq('body').on('click', '.securlistbox2 input.z-textbox-readonly', function(){
			$(this).blur();	
		}).on('click', '.securlistbox2 input.df:not(.ed, .z-textbox-readonly)', function(){
			$(this).removeClass( "edit deny df" ).addClass( "view" ).val(v).blur();				
    	}).on('click', '.securlistbox2 input.view:not(.ed, .z-textbox-readonly)', function(){
			$(this).removeClass( "deny view df" ).addClass( "edit" ).val(e).blur();
			if($(this).hasClass('MP')){
    			$(this).closest('tr').find('.MPS').prop('readonly', false).removeClass( "z-textbox-readonly" ).val(d).blur();
    		};	
    	}).on('click', '.securlistbox2 input.edit:not(.ed, .z-textbox-readonly)', function(){
    		$(this).removeClass( "edit view df" ).addClass( "deny" ).val(d).blur();	
    		if($(this).hasClass('MP')){
    			$(this).closest('tr').find('.MPS').prop('readonly', true).removeClass( "edit" ).addClass("deny z-textbox-readonly").val(d).blur();
    		};	
    				
   		}).on('click', '.securlistbox2 input.deny:not(.ed, .z-textbox-readonly)', function(){  
      		$(this).removeClass( "deny edit df" ).addClass( "df" ).val(df).blur();		
      		if($(this).hasClass('MP')){
    			$(this).closest('tr').find('.MPS').prop('readonly', true).removeClass( "edit" ).addClass("deny z-textbox-readonly").val(d).blur();
    		}; 		
   		}).on('click', '.securlistbox2 input.ed.deny:not(.z-textbox-readonly)', function(){
     		$(this).removeClass( "deny edit" ).addClass( "df" ).val(df).blur();
     		
    	}).on('click', '.securlistbox2 input.ed.df:not(.z-textbox-readonly)', function(){
     		$(this).removeClass( "deny df" ).addClass( "edit" ).val(e).blur();		
    	}).on('click', '.securlistbox2 input.ed.edit:not(.z-textbox-readonly)', function(){ 
        	$(this).removeClass( "edit df" ).addClass( "deny" ).val(d).blur();
        	
    	});
		
		
	jq('body').on('click', '.securlistbox2 .dblline td', function(){
		
		var t = $(this);
        var colnum1 = parseInt(t.index())+1;
        var colnum2 = parseInt(t.index())+2;
		setTimeout(function(){
			var v = t.find('input').val();
			var c = t.find('input').prop('class');
  			t.closest('table').find('td:nth-child('+colnum1+')').find('input:not(input.z-textbox-readonly)').val(v).prop('class',c)
  				.each(function(){
	  				zAu.send(new zk.Event(zk.Widget.$(this), 'onChange', {"value": v}, {toServer:true}));
	  			});
  			if (t.find('input').hasClass('MP')){
  				if(v=='Deny'||v=='View'){
  					t.closest('table').find('td:nth-child('+colnum2+')').find('input').slice(1).val(d).removeClass("edit view").prop('readonly', true).addClass("deny z-textbox-readonly").each(function(){
  		  				zAu.send(new zk.Event(zk.Widget.$(this), 'onChange', {"value": d}, {toServer:true}));
  		  			});
  				}else{
  					t.closest('table').find('td:nth-child('+colnum2+')').find('input').slice(1).prop('readonly', false).removeClass("z-textbox-readonly");
  				}
  			
  			};
  			
  			
		}, 100);
	});
	
	jq('.secrulebox').on('click', 'th:not(:first-child) input[type=checkbox]', function(){
		var t = $(this);
        var colnum = parseInt(t.closest('th').index())+1;
		var checkedStatus = this.checked;
		$('.secrulebox').find('td:nth-child('+colnum+')').find('input[type=checkbox]').prop('checked', checkedStatus )
			//start testing
			.each(function(){
		        if( $(this).prop("checked") == true ){
	            	zAu.send(new zk.Event(zk.Widget.$(this), 'onCheck', {"": true}, {toServer:true}));
	            }else if( $(this).prop("checked") == false ){
	            	zAu.send(new zk.Event(zk.Widget.$(this), 'onCheck', {"": false}, {toServer:true}));
	            }     
			});	
			//end testing
	});
	
	jq('body').on('click', '.allrowcheck input[type=checkbox]', function(){
		var checkedStatus = this.checked;
		$(this).closest('tr').find('input[type=checkbox]:not(.allrowcheck input[type=checkbox])').prop('checked', checkedStatus )
		//start testing
		.each(function(){
	        if( $(this).prop("checked") == true ){
            	zAu.send(new zk.Event(zk.Widget.$(this), 'onCheck', {"": true}, {toServer:true}));
            }else if( $(this).prop("checked") == false ){
            	zAu.send(new zk.Event(zk.Widget.$(this), 'onCheck', {"": false}, {toServer:true}));
            }     
		});	
		//end testing
	});	
		
}; 
	
function tabcolor(){
	jq(".z-tabbox-bottom .zssheettab:contains('Actual')").addClass('tabActual');
	jq(".z-tabbox-bottom .zssheettab:contains('AP')").addClass('tabAP');
	jq(".z-tabbox-bottom .zssheettab:contains('Forecast')").addClass('tabForecast');
	jq(".z-tabbox-bottom .zssheettab:contains('LY')").addClass('tabLY');
	jq(".z-tabbox-bottom .zssheettab:contains('MP')").addClass('tabMP');
};

var t = null;
jq('.z-popup,.ZKmultitext').mouseenter(function() {
        if(t !== null) {
            clearTimeout(t);
            t = null;
        }
    });	         
	         
	         
	function selecthideshow(id,target,eq){
		var t = jq('$'+id+' option:selected').index()+1;
    	if (t==eq){
    		jq('$'+target).show();
    	}else{
    		jq('$'+target).hide().find(':text').val('');
    	}
	};
	
function sidepanels(){
	jq('.openednodes, .closednodes').toggle();
	jq(window).trigger('resize');
};

function download(id){
	var tog = zk.Widget.$('$m'+id); //Using the pattern for $ + ID to select a ZK widget.
	jq(tog).toggleClass('zkdling');
};


function hideBusyBoxText(){
	jq('.z-apply-loading').hide();
}

function openNoPanel(id){
	var tog = jq('$m'+id);
	tog.toggleClass('opened');

};
function openOverlay(id){
	var tog = jq('$m'+id);
	var overlay = jq('$p'+id);
	var top = jq('#topcontainer').outerHeight();
	var topM = jq('$meta').outerHeight();
	var height = tog.outerHeight();
	var x = tog.offset().left;
	var y = tog.offset().top;
	var mheight = jq('.main').outerHeight()-20;
	var mwidth = jq('.main').outerWidth()-2;
	
	tog.toggleClass('opened');
	triggerZKEvent(zk.Widget.$('$m'+id), 'onOpenPanel', {'isOpen':jq(tog).hasClass('opened')});
	overlay.css({
		position: 'absolute',
		top:(y + height - top -13) + 'px',
		left: (x-10) +'px'
	}).toggle();
};

function openFullPanel(id){
		var sheight = jq(zk.Widget.$('$pspreadsheet')).height(),
		    spheight = jq(zk.Widget.$('$splitpanelcontainer')).height(),
		    oheight = sheight+spheight,
			tog = zk.Widget.$('$m'+id), //Using the pattern for $ + ID to select a ZK widget.
			panel = zk.Widget.$('$p'+id),
			el = jq('.z-menuitem-content');
		
		jq('.openednodes, .closednodes').toggleClass('hideside');			
		jq('.z-menuitem').toggleClass('z-menuitem-disabled');
		el.prop("disabled",!el.prop("disabled"))
		
		jq(tog).toggleClass('opened');
		triggerZKEvent(tog, 'onOpenPanel', {'isOpen':jq(tog).hasClass('opened')});
		
		jq(panel).toggle();
		jq(zk.Widget.$('$pspreadsheet')).toggle();
		jq(zk.Widget.$('$splitpanelcontainer')).toggle();
		jq('$fulldropdowncontainer').height(oheight+'px').toggle();
		jq(window).trigger('resize');
	};

function openFullPanelWtree(id){
		var sheight = jq(zk.Widget.$('$pspreadsheet')).height(),
		    spheight = jq(zk.Widget.$('$splitpanelcontainer')).height(),
		    oheight = sheight+spheight,
			tog = zk.Widget.$('$m'+id), //Using the pattern for $ + ID to select a ZK widget.
			panel = zk.Widget.$('$p'+id),
			el = jq('.z-menuitem-content');
		
		jq('.z-menuitem').toggleClass('z-menuitem-disabled');
		el.prop("disabled",!el.prop("disabled"))
		
		jq(tog).toggleClass('opened');
		triggerZKEvent(tog, 'onOpenPanel', {'isOpen':jq(tog).hasClass('opened')});
		
		jq(panel).toggle();
		jq(zk.Widget.$('$pspreadsheet')).toggle();
		jq(zk.Widget.$('$splitpanelcontainer')).toggle();
		jq('$fulldropdowncontainer').height(oheight+'px').toggle();
		jq(window).trigger('resize');
	};	
	
	function openPanel(id){
		  var tog = zk.Widget.$('$m'+id), //Using the pattern for $ + ID to select a ZK widget.
		    panel = zk.Widget.$('$p'+id);
		jq(tog).toggleClass('opened');
		var isOpenPanel = jq(tog).hasClass('opened');

		triggerZKEvent(tog, 'onOpenPanel', {'isOpen':isOpenPanel});	
		
		if (isOpenPanel) jq(panel).toggle();
		setTimeout(function() {
			jq('$partialdropdowncontainer').slideToggle(300, function(){
				if (!isOpenPanel) jq(panel).toggle();
				jq(window).trigger('resize');
				});
		}, 30);
	}
	function triggerZKEvent(sourceObj, eventType, data){
		//IMPORTANT NOTE: This method should only be utilize for special case scenarios!! 
		//                events such as button clicked, on value change etc. should use conventional ZK event handling. 
		zAu.send(new zk.Event(sourceObj, eventType, data));
	}
	
	
	
