# 1 "c:\\tmp\\ck\\\\combined_CK.c"
# 1 "globals.h" 1



 
 
# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"








































































	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 266 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 505 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 508 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 532 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 566 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 589 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 613 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 692 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											int * col_name_len);
# 753 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 768 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   int const in_len,
                                   char * * const out_str,
                                   int * const out_len);
# 792 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 804 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 812 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 818 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 917 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 924 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 946 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1022 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1051 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"


# 1063 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


int vtc_connect(char * servername, int portnum, int options);
int vtc_disconnect(int pvci);
int vtc_get_last_error(int pvci);
int vtc_query_column(int pvci, char * columnName, int columnIndex, char * *outvalue);
int vtc_query_row(int pvci, int rowIndex, char * **outcolumns, char * **outvalues);
int vtc_send_message(int pvci, char * column, char * message, unsigned short *outRc);
int vtc_send_if_unique(int pvci, char * column, char * message, unsigned short *outRc);
int vtc_send_row1(int pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
int vtc_update_message(int pvci, char * column, int index , char * message, unsigned short *outRc);
int vtc_update_message_ifequals(int pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
int vtc_update_row1(int pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
int vtc_retrieve_message(int pvci, char * column, char * *outvalue);
int vtc_retrieve_messages1(int pvci, char * columnNames, char * delimiter, char * **outvalues);
int vtc_retrieve_row(int pvci, char * **outcolumns, char * **outvalues);
int vtc_rotate_message(int pvci, char * column, char * *outvalue, unsigned char sendflag);
int vtc_rotate_messages1(int pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
int vtc_rotate_row(int pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
int vtc_increment(int pvci, char * column, int index , int incrValue, int *outValue);
int vtc_clear_message(int pvci, char * column, int index , unsigned short *outRc);
int vtc_clear_column(int pvci, char * column, unsigned short *outRc);
int vtc_ensure_index(int pvci, char * column, unsigned short *outRc);
int vtc_drop_index(int pvci, char * column, unsigned short *outRc);
int vtc_clear_row(int pvci, int rowIndex, unsigned short *outRc);
int vtc_create_column(int pvci, char * column,unsigned short *outRc);
int vtc_column_size(int pvci, char * column, int *size);
void vtc_free(char * msg);
void vtc_free_list(char * *msglist);

int lrvtc_connect(char * servername, int portnum, int options);
int lrvtc_disconnect();
int lrvtc_query_column(char * columnName, int columnIndex);
int lrvtc_query_row(int columnIndex);
int lrvtc_send_message(char * columnName, char * message);
int lrvtc_send_if_unique(char * columnName, char * message);
int lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
int lrvtc_update_message(char * columnName, int index , char * message);
int lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
int lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
int lrvtc_retrieve_message(char * columnName);
int lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
int lrvtc_retrieve_row();
int lrvtc_rotate_message(char * columnName, unsigned char sendflag);
int lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
int lrvtc_rotate_row(unsigned char sendflag);
int lrvtc_increment(char * columnName, int index , int incrValue);
int lrvtc_noop();
int lrvtc_clear_message(char * columnName, int index);
int lrvtc_clear_column(char * columnName); 
int lrvtc_ensure_index(char * columnName); 
int lrvtc_drop_index(char * columnName); 
int lrvtc_clear_row(int rowIndex);
int lrvtc_create_column(char * columnName);
int lrvtc_column_size(char * columnName);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 6 "globals.h" 2

# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h" 1
























































 




 








 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 737 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"


# 750 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"



























# 788 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 856 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

 
 
 






# 9 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/web_api.h" 2

















 







 














  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);


 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2




 
 




# 1 "c:\\tmp\\ck\\\\combined_CK.c" 2


# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/SharedParameter.h"





typedef int PVCI2;
typedef int VTCERR2;

 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(int pvci);
extern VTCERR2  vtc_get_last_error(int pvci);

 
extern VTCERR2  vtc_query_column(int pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(int pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(int pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(int pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(int pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_update_message(int pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(int pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(int pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(int pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(int pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(int pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(int pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(int pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(int pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_increment(int pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(int pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(int pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(int pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(int pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(int pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(int pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(int pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(int pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern int     lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern int     lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 3 "c:\\tmp\\ck\\\\combined_CK.c" 2

# 1 "vuser_init.c" 1
 







vuser_init()
{

 

	web_url("<url}", 
		"URL=https://<url}/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/favicon.ico", "Referer=", "ENDITEM", 
		"Url=/branding/7thonline/7thonline_logo.svgz", "Referer=https://<url}/branding/7thonline/login.css", "ENDITEM", 
		"Url=/branding/7thonline/os_bg.jpg", "Referer=https://<url}/branding/7thonline/login.css", "ENDITEM", 
		"Url=/branding/7thonline/login.gif", "Referer=https://<url}/branding/7thonline/login.css", "ENDITEM", 
		"Url=/branding/7thonline/bg_password.gif", "Referer=https://<url}/branding/7thonline/login.css", "ENDITEM", 
		"Url=/branding/7thonline/bg_username.gif", "Referer=https://<url}/branding/7thonline/login.css", "ENDITEM", 
		"Url=/branding/7thonline/button_bg.gif", "Referer=https://<url}/branding/7thonline/login.css", "ENDITEM", 
		"Url=/images/common/loadingAnimation.gif", "Referer=https://<url}/bin-java/login?f=general/login.htm", "ENDITEM", 
		"Url=/branding/7thonline/x.gif", "Referer=https://<url}/branding/7thonline/login.css", "ENDITEM", 
		"LAST");

	web_add_cookie("map=true; DOMAIN=<url}");

 



	web_reg_save_param_regexp(
		"ParamName=jsessionid",
		"RegExp=jsessionid=(.*?)\\.tomcat",
		"Ordinal=1",
		"SEARCH_FILTERS",
		"Scope=Headers",
		"RequestUrl=*/efsnPackage.do_userAuth*",
		"LAST");

 



	web_reg_save_param_regexp(
		"ParamName=tomcatNum",
		"RegExp=\\.tomcat(.*?)\\?dump",
		"Ordinal=1",
		"SEARCH_FILTERS",
		"Scope=Headers",
		"RequestUrl=*/efsnPackage.do_userAuth*",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=dump_01",
		"RegExp=dump=(.*?)\\\r\\\n",
		"SEARCH_FILTERS",
		"Scope=Headers",
		"IgnoreRedirections=No",
		"RequestUrl=*/efsnPackage.do_userAuth*",
		"LAST");
		
	web_reg_find("Text=Warn",
		"SaveCount=warn_count",
		"LAST");			

	web_submit_data("efsnPackage.do_userAuth", 
		"Action=https://<url}/bin-java/efsnPackage.do_userAuth", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://<url}/bin-java/login?f=general/login.htm", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=login", "Value=<userName}", "ENDITEM", 
		"Name=passwd", "Value=<passwd}", "ENDITEM", 
		"Name=login", "Value=Wait", "ENDITEM", 
		"Name=map", "Value=on", "ENDITEM", 
		"LAST");
		
	if (atoi(lr_eval_string("<warn_count}")) > 0){	
	
	 
  







	
	 
  








		lr_think_time(3);
			
			
		if (atoi(lr_eval_string("<singleRunSecurity}")) == 1){			
		 
			web_reg_save_param_regexp(
				"ParamName=dump_03",
				"RegExp=dump=(.*?)\">Security\\ Setup",
				"SEARCH_FILTERS",
				"Scope=Body",
				"IgnoreRedirections=No",
				"LAST");				
		}				
	
		web_submit_data("efsnPackage.do_userAuth_2",
			"Action=https://<url}/bin-java/efsnPackage.do_userAuth",
			"Method=POST",
			"TargetFrame=",
			"RecContentType=text/html",
			"Referer=https://<url}/bin-java/efsnPackage.do_userLoginWarning;jsessionid=<jsessionid}.tomcat<tomcatNum}?dump=<dump_01}",
			"Snapshot=t3.inf",
			"Mode=HTML",
			"ITEMDATA",
			"Name=answeryes", "Value=Wait", "ENDITEM",
			"EXTRARES",
			"URL=../branding/7thonline/btn-nav-search-top_bt.png", "Referer=https://<url}/branding/7thonline/stylesheet.css", "ENDITEM",
			"URL=../branding/7thonline/bg-nav-search-top_grey.gif", "Referer=https://<url}/branding/7thonline/stylesheet.css", "ENDITEM",
			"URL=../branding/7thonline/sidetab_bt.png", "Referer=https://<url}/branding/7thonline/stylesheet.css", "ENDITEM",
			"URL=../images/common/checkbox_s.gif", "Referer=https://<url}/bin-java/efsnPackage.do_userGoHome?dump=1", "ENDITEM",
			"URL=../branding/7thonline/bg-nav-search-bottom_trans.png", "Referer=https://<url}/branding/7thonline/stylesheet.css", "ENDITEM",
			"URL=../images/common/tip.gif", "Referer=https://<url}/javascript/7thonline_default_v4.css", "ENDITEM",
			"LAST");
		
	
		web_url("efsnPackage.do_logicalWorkflow",
			"URL=https://<url}/bin-java/efsnPackage.do_logicalWorkflow?dump=1",
			"TargetFrame=",
			"Resource=0",
			"RecContentType=text/html",
			"Referer=https://<url}/bin-java/efsnPackage.do_userGoHome?dump=1",
			"Snapshot=t4.inf",
			"Mode=HTML",
			"LAST");
		
	} else {
	
	
	
		if (atoi(lr_eval_string("<singleRunSecurity}")) == 1){			
		 
			web_reg_save_param_regexp(
				"ParamName=dump_03",
				"RegExp=dump=(.*?)\">Security\\ Setup",
				"SEARCH_FILTERS",
				"Scope=Body",
				"IgnoreRedirections=No",
				"LAST");				
		}		
	
	
		web_submit_data("efsnPackage.do_userAuth_2_1",
			"Action=https://<url}/bin-java/efsnPackage.do_userGoHome?dump=1",
			"Method=POST",
			"TargetFrame=",
			"RecContentType=text/html",
			"Referer=https://<url}/bin-java/login?f=general/login.htm",
 
 
			"Mode=HTML",
 
 
 
 
 
 
 
			"LAST");	
	
	
	
		web_url("efsnPackage.do_logicalWorkflow_01", 
				"URL=https://<url}/bin-java/efsnPackage.do_logicalWorkflow?dump=1", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/html", 
 
				"Referer=https://<url}/bin-java/efsnPackage.do_userGoHome?dump=1",
				"Snapshot=t89.inf", 
				"Mode=HTML", 
				"LAST");		
			
	}
	

	return 0;
}
# 4 "c:\\tmp\\ck\\\\combined_CK.c" 2

# 1 "DoorInfo.c" 1
DoorInfo()
{
	int door_round = 0;  
	lr_think_time(3);
	

	lr_start_transaction("loadAccountGroup");

 
	web_reg_save_param_regexp(
		"ParamName=dump_02",
		"RegExp=dump=(.*?)'\\),",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");


	
	
	web_url("efsnPackage.do_doorInfoEntry",
		"URL=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://<url}/bin-java/efsnPackage.do_userGoHome?dump=1",
		"Snapshot=t5.inf",
		"Mode=HTML",
		"EXTRARES",
		"URL=zkau/view/z_ed6/w60Qn/0kp/0/ss_w60Qn_p0_sheet_1.css", "ENDITEM",
		"URL=../javascript/zul.js?_=1479951131542", "ENDITEM",
		"URL=zkau/web/_zv2015042817/js/zul.box.wpd", "ENDITEM",
		"URL=zkau/web/_zv3.9.0/js/zss.wpd", "ENDITEM",
		"URL=zkau/web/_zv2015042817/js/zul.utl.wpd", "ENDITEM",
		"URL=zkau/web/_zv2015042817/js/zul.wnd.wpd", "ENDITEM",
		"URL=zkau/web/_zv2015042817/js/zul.menu.wpd", "ENDITEM",
		"URL=zkau/web/_zv2015042817/js/zul.tab.wpd", "ENDITEM",
		"URL=zkau/web/_zv2015042817/js/zul.layout.wpd", "ENDITEM",
		"URL=zkau/web/_zv2015042817/js/zul.inp.wpd", "ENDITEM",
		"URL=zkau/web/_zv2015042817/js/zk.fmt.wpd", "ENDITEM",
		"URL=zkau/web/_zv2015042817/js/zkex.inp.wpd", "ENDITEM",
		"URL=../images/common/close_grey.gif", "ENDITEM",
		"URL=zkau/web/zss/img/ui-menu.png", "ENDITEM",
		"URL=zkau/web/zss/img/plus.png", "ENDITEM",
		"URL=zkau/web/zss/img/control-stop-000-small.png", "ENDITEM",
		"URL=zkau/web/zss/img/control-stop-270-small.png", "ENDITEM",
		"URL=zkau/web/_zv2015042817/js/zkex.cmsp.wpd", "ENDITEM",
		"URL=zkau/web/zss/img/edit-bold.png", "ENDITEM",
		"URL=zkau/web/zss/img/edit-italic.png", "ENDITEM",
		"URL=zkau/web/zss/img/paint-can-color.png", "ENDITEM",
		"URL=zkau/web/zss/img/edit-color.png", "ENDITEM",
		"URL=zkau/web/zss/img/border-bottom.png", "ENDITEM",
		"URL=zkau/web/zss/img/edit-vertical-alignment-top.png", "ENDITEM",
		"URL=zkau/web/zss/img/edit-alignment.png", "ENDITEM",
		"URL=zkau/web/zss/img/edit-wrap.png", "ENDITEM",
		"URL=zkau/web/zss/img/border-right.png", "ENDITEM",
		"URL=zkau/web/zss/img/border-all.png", "ENDITEM",
		"URL=zkau/web/zss/img/border.png", "ENDITEM",
		"URL=zkau/web/zss/img/border-top.png", "ENDITEM",
		"URL=zkau/web/zss/img/border-outside.png", "ENDITEM",
		"URL=zkau/web/zss/img/border-left.png", "ENDITEM",
		"URL=zkau/web/zss/img/border-inside.png", "ENDITEM",
		"URL=zkau/web/zss/img/border-horizontal.png", "ENDITEM",
		"URL=zkau/web/zss/img/edit-alignment-right.png", "ENDITEM",
		"URL=zkau/web/zss/img/edit-vertical-alignment-middle.png", "ENDITEM",
		"URL=zkau/web/zss/img/edit-vertical-alignment.png", "ENDITEM",
		"URL=zkau/web/zss/img/border-vertical.png", "ENDITEM",
		"URL=zkau/web/zss/img/edit-alignment-center.png", "ENDITEM",
		"URL=zkau/web/_zv2015042817/js/zul.sel.wpd", "ENDITEM",
		"URL=zkau/web/_zv2015042817/js/zul.mesh.wpd", "ENDITEM",
		"URL=zkau/view/z_ed6/w60Qn/0kp/1/ss_w60Qn_p0_sheet_1.css", "ENDITEM",
		"URL=zkau/view/z_ed6/w60Qn/0kp/2/ss_w60Qn_p0_sheet_3.css", "ENDITEM",
		"URL=zkau/view/z_ed6/w60Qn/0kp/3/ss_w60Qn_p0_sheet_3.css", "ENDITEM",
		"URL=zkau/view/z_ed6/w60Qn/0kp/4/ss_w60Qn_p0_sheet_3.css", "ENDITEM",
		"URL=zkau/view/z_ed6/dwnmed-0/upt1/AccountAssignmentDownload_20161124-093837.xlsx", "ENDITEM",
		"URL=zkau/view/z_ed6/dwnmed-1/j3o/AccoutGroupDownload_20161124-093915.xlsx", "ENDITEM",
		"URL=zkau?dtid=z_ed6&cmd_0=rmDesktop&opt_0=i", "ENDITEM",
		"LAST");

	web_url("efsnPackage.do_logicalWorkflow_2",
		"URL=https://<url}/bin-java/efsnPackage.do_logicalWorkflow?dump=1",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t6.inf",
		"Mode=HTML",
		"LAST");
		


 
	web_reg_save_param_regexp(
		"ParamName=doorInfo_dtid",
		"RegExp=,\\{dt:'(.*?)',cu:",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=doorInfo_sheetId",
		"RegExp=,showToolbar:false,showFormulabar:false,maxRenderedCellSize:9000,sheetLabels:\\[\\{'id':'(.*?)_1','name':",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=doorInfoOptions_uuid",
		"RegExp=\\['zul\\.menu\\.Menuitem','(.*?)',\\{id:'moptions'",
		"Ordinal=1",  
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=doorInfoFreezeBtn_uuid",
		"RegExp=\\['zul\\.menu\\.Menuitem','(.*?)',\\{id:'mfreezepane'",
		"Ordinal=1",  
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=doorInfoSave_uuid",
		"RegExp=\\['zul\\.menu\\.Menuitem','(.*?)',\\{id:'msave'",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=downloadDoor_uuid",
		"RegExp=\\['zul\\.menu\\.Menuitem','(.*?)',\\{id:'mexcel2'",
		"Ordinal=1",  
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=downloadAssignment_uuid",
		"RegExp=\\['zul\\.menu\\.Menuitem','(.*?)',\\{id:'mexcel1'",
		"Ordinal=1",  
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=doorSaveClose_uuid",
		"RegExp=\\['zul\\.menu\\.Menuitem','(.*?)',\\{id:'msaveclose'",
		"Ordinal=1",   
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=doorInfo_uuid",
		"RegExp=\\['zss\\.Spreadsheet','(.*?)',\\{id:",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		"LAST");

	web_url("do_loadZKTemplate",
		"URL=https://<url}/bin-java/zk/do_loadZKTemplate?dump=<dump_02}&f=doorinfo.zul&zk.redrawCtrl=page",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t7.inf",
		"Mode=HTML",
		"EXTRARES",
		"URL=/branding/7thonline/loader-whiteonblue.gif", "Referer=https://<url}/branding/7thonline/stylesheet.css", "ENDITEM",
		"URL=../zkau/web/b34f6723/zul/less/font/fontawesome-webfont.woff?v=4.0.1", "Referer=https://<url}/bin-java/zkau/web/b34f6723/_zkiju-zkstyle/zul/css/zk.wcs", "ENDITEM",
		"URL=../zkau/web/b34f6723/zkstyle/zul/img/menu/zk-menu-sprite.png", "Referer=https://<url}/bin-java/zkau/web/b34f6723/_zkiju-zkstyle/zul/css/zk.wcs", "ENDITEM",
		"URL=../zkau/web/b34f6723/zkstyle/zul/img/menu/dl-spinner-button-bg.gif", "Referer=https://<url}/bin-java/zkau/web/b34f6723/_zkiju-zkstyle/zul/css/zk.wcs", "ENDITEM",
		"LAST");

	web_submit_data("zkau",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t8.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onZSSFetchActiveRange", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_sheetId}_1\",\"top\":131,\"left\":0,\"right\":27,\"bottom\":211}", "ENDITEM",
		"Name=cmd_1", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_1", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":130}", "ENDITEM",
		"LAST");

 

	web_submit_data("zkau_2",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t9.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":211}", "ENDITEM",
		"Name=cmd_1", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_1", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":211}", "ENDITEM",
		"Name=cmd_2", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_2", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_2", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":211}", "ENDITEM",
		"Name=cmd_3", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_3", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_3", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":211}", "ENDITEM",
		"Name=cmd_4", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_4", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_4", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":211}", "ENDITEM",
		"LAST");

	lr_end_transaction("loadAccountGroup",2);

	lr_think_time(3);

	lr_start_transaction("loadOptions");

	web_submit_data("zkau_3",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t10.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onOpenPanel", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfoOptions_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"isOpen\":true}", "ENDITEM",
		"Name=cmd_1", "Value=onClick", "ENDITEM",
		"Name=uuid_1", "Value=<doorInfoOptions_uuid}", "ENDITEM",
		"Name=data_1", "Value={\"pageX\":189,\"pageY\":70,\"which\":1,\"x\":14,\"y\":6}", "ENDITEM",
		"LAST");

	web_submit_data("zkau_4",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t11.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":211}", "ENDITEM",
		"Name=cmd_1", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_1", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":211}", "ENDITEM",
		"LAST");

	lr_end_transaction("loadOptions",2);

	lr_think_time(3);

	lr_start_transaction("returnFromOptions");

	web_submit_data("zkau_5",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t12.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onOpenPanel", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfoOptions_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"isOpen\":false}", "ENDITEM",
		"LAST");

	web_submit_data("zkau_6",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t13.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":211}", "ENDITEM",
		"Name=cmd_1", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_1", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":211}", "ENDITEM",
		"LAST");

	lr_end_transaction("returnFromOptions",2);

	lr_think_time(3);

	lr_start_transaction("sortAccountGroup");

	web_submit_data("zkau_7",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t14.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onCellFocus", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_sheetId}_1\",\"row\":0,\"col\":0}", "ENDITEM",
		"LAST");

	web_submit_data("zkau_8",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t15.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onCellFocus", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_sheetId}_1\",\"row\":0,\"col\":3}", "ENDITEM",
		"Name=cmd_1", "Value=onCellSelection", "ENDITEM",
		"Name=uuid_1", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_sheetId}_1\",\"type\":\"cell\",\"left\":3,\"top\":0,\"right\":3,\"bottom\":0}", "ENDITEM",
		"Name=cmd_2", "Value=onZSSCellMouse", "ENDITEM",
		"Name=uuid_2", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_2", "Value={\"type\":\"lc\",\"shx\":310,\"shy\":53,\"key\":\"\",\"sheetId\":\"<doorInfo_sheetId}_1\",\"row\":0,\"col\":3,\"mx\":329,\"my\":136}", "ENDITEM",
		"LAST");

	web_submit_data("zkau_9",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t16.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=echo", "ENDITEM",
		"Name=opt_0", "Value=i", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"\":[\"onSort\",0]}", "ENDITEM",
		"LAST");

	web_submit_data("zkau_10",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t17.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onCellFocus", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_sheetId}_1\",\"row\":0,\"col\":3}", "ENDITEM",
		"Name=cmd_1", "Value=echo", "ENDITEM",
		"Name=opt_1", "Value=i", "ENDITEM",
		"Name=uuid_1", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_1", "Value={\"\":[\"onRebuild\",0]}", "ENDITEM",
		"LAST");

	web_submit_data("zkau_11",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t18.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=echo", "ENDITEM",
		"Name=opt_0", "Value=i", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"\":[\"onClearBusySpreadsheet\",0]}", "ENDITEM",
		"LAST");

	web_submit_data("zkau_12",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t19.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onZSSFetchActiveRange", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_sheetId}_3\",\"top\":157,\"left\":0,\"right\":27,\"bottom\":237}", "ENDITEM",
		"Name=cmd_1", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_1", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":156}", "ENDITEM",
		"LAST");

	web_submit_data("zkau_13",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t20.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onCellSelection", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_sheetId}_3\",\"type\":\"cell\",\"left\":0,\"top\":1,\"right\":0,\"bottom\":1}", "ENDITEM",
		"Name=cmd_1", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_1", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", "ENDITEM",
		"Name=cmd_2", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_2", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_2", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", "ENDITEM",
		"Name=cmd_3", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_3", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_3", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", "ENDITEM",
		"LAST");

	lr_end_transaction("sortAccountGroup",2);

	lr_think_time(3);

	

	web_submit_data("zkau_14",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t21.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onCellFocus", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_sheetId}_3\",\"row\":1,\"col\":0}", "ENDITEM",
		"Name=cmd_1", "Value=onCellFocus", "ENDITEM",
		"Name=uuid_1", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_sheetId}_3\",\"row\":1,\"col\":3}", "ENDITEM",
		"LAST");
	
	lr_start_transaction("freeze");

	web_submit_data("zkau_15",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t22.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onCellSelection", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_sheetId}_3\",\"type\":\"cell\",\"left\":3,\"top\":1,\"right\":3,\"bottom\":1}", "ENDITEM",
		"Name=cmd_1", "Value=onZSSCellMouse", "ENDITEM",
		"Name=uuid_1", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_1", "Value={\"type\":\"lc\",\"shx\":336,\"shy\":71,\"key\":\"\",\"sheetId\":\"<doorInfo_sheetId}_3\",\"row\":1,\"col\":3,\"mx\":355,\"my\":154}", "ENDITEM",
		"Name=cmd_2", "Value=onCellFocus", "ENDITEM",
		"Name=uuid_2", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_2", "Value={\"sheetId\":\"<doorInfo_sheetId}_3\",\"row\":1,\"col\":3}", "ENDITEM",
		"Name=cmd_3", "Value=onClick", "ENDITEM",
		"Name=uuid_3", "Value=<doorInfoFreezeBtn_uuid}", "ENDITEM",
		"Name=data_3", "Value={\"pageX\":70,\"pageY\":72,\"which\":1,\"x\":7,\"y\":8}", "ENDITEM",
		"LAST");

	web_submit_data("zkau_16",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t23.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", "ENDITEM",
		"Name=cmd_1", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_1", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", "ENDITEM",
		"Name=cmd_2", "Value=echo", "ENDITEM",
		"Name=opt_2", "Value=i", "ENDITEM",
		"Name=uuid_2", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_2", "Value={\"\":[\"onFreeze\",0]}", "ENDITEM",
		"LAST");

	web_submit_data("zkau_17",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t24.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=echo", "ENDITEM",
		"Name=opt_0", "Value=i", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"\":[\"onClearBusySpreadsheet\",0]}", "ENDITEM",
		"LAST");

	web_submit_data("zkau_18",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t25.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onZSSFetchActiveRange", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_sheetId}_3\",\"top\":157,\"left\":0,\"right\":27,\"bottom\":237}", "ENDITEM",
		"Name=cmd_1", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_1", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":156}", "ENDITEM",
		"LAST");

	web_submit_data("zkau_19",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t26.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", "ENDITEM",
		"Name=cmd_1", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_1", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", "ENDITEM",
		"LAST");

	lr_end_transaction("freeze",2);

	lr_think_time(3);

	lr_start_transaction("re-freeze");

	web_submit_data("zkau_20",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t27.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onClick", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfoFreezeBtn_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"pageX\":81,\"pageY\":75,\"which\":1,\"x\":18,\"y\":11}", "ENDITEM",
		"LAST");

	web_submit_data("zkau_21",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t28.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", "ENDITEM",
		"Name=cmd_1", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_1", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", "ENDITEM",
		"Name=cmd_2", "Value=echo", "ENDITEM",
		"Name=opt_2", "Value=i", "ENDITEM",
		"Name=uuid_2", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_2", "Value={\"\":[\"onFreeze\",0]}", "ENDITEM",
		"LAST");

	web_submit_data("zkau_22",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t29.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=echo", "ENDITEM",
		"Name=opt_0", "Value=i", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"\":[\"onClearBusySpreadsheet\",0]}", "ENDITEM",
		"LAST");

	web_submit_data("zkau_23",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t30.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onZSSFetchActiveRange", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_sheetId}_3\",\"top\":157,\"left\":0,\"right\":27,\"bottom\":237}", "ENDITEM",
		"Name=cmd_1", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_1", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":156}", "ENDITEM",
		"LAST");

	web_submit_data("zkau_24",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t31.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", "ENDITEM",
		"Name=cmd_1", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_1", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", "ENDITEM",
		"Name=cmd_2", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_2", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_2", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", "ENDITEM",
		"Name=cmd_3", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_3", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_3", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", "ENDITEM",
		"LAST");

	web_submit_data("zkau_25",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t32.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", "ENDITEM",
		"Name=cmd_1", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_1", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", "ENDITEM",
		"LAST");

	lr_end_transaction("re-freeze",2);

	lr_think_time(3);

	lr_start_transaction("saveAccountGroup");

	web_submit_data("zkau_26",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t33.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onClick", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfoSave_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"pageX\":25,\"pageY\":75,\"which\":1,\"x\":6,\"y\":11}", "ENDITEM",
		"LAST");

	web_submit_data("zkau_27",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t34.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", "ENDITEM",
		"Name=cmd_1", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_1", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", "ENDITEM",
		"Name=cmd_2", "Value=echo", "ENDITEM",
		"Name=opt_2", "Value=i", "ENDITEM",
		"Name=uuid_2", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_2", "Value={\"\":[\"onSave\",0]}", "ENDITEM",
		"LAST");

	web_submit_data("zkau_28",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t35.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=echo", "ENDITEM",
		"Name=opt_0", "Value=i", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"\":[\"onClearBusySpreadsheet\",0]}", "ENDITEM",
		"LAST");

	web_submit_data("zkau_29",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t36.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", "ENDITEM",
		"Name=cmd_1", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_1", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", "ENDITEM",
		"LAST");

	lr_end_transaction("saveAccountGroup",2);
	
	lr_save_int(door_round,"assignment_downloadNum");

	lr_start_transaction("downloadAssignment");

 



	web_reg_save_param_regexp(
		"ParamName=assignment_xlsx",
		"RegExp=dwnmed-<assignment_downloadNum}\\\\/(.*?)\\\\/AccountAssignmentDownload",
		"Ordinal=1",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=assignment_date",
		"RegExp=AccountAssignmentDownload_(.*?)\\.xlsx",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

	web_submit_data("zkau_30",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t37.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onClick", "ENDITEM",
		"Name=uuid_0", "Value=<downloadAssignment_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"pageX\":100,\"pageY\":74,\"which\":1,\"x\":10,\"y\":10}", "ENDITEM",
		"LAST");

	web_submit_data("zkau_30_1",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Mode=HTML",
		"EXTRARES",
		"URL=zkau/view/<doorInfo_dtid}/dwnmed-<assignment_downloadNum}/<assignment_xlsx}/AccountAssignmentDownload_<assignment_date}.xlsx", "Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry", "ENDITEM",
		"LAST");
	
	lr_end_transaction("downloadAssignment",2);

	door_round++;
	lr_save_int(door_round,"door_downloadNum");

	lr_start_transaction("downloadAccountGroup");
	
 



	web_reg_save_param_regexp(
		"ParamName=door_xlsx",
		"RegExp=dwnmed-<door_downloadNum}\\\\/(.*?)\\\\/AccoutGroupDownload",
		"Ordinal=1",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");
	

 
	web_reg_save_param_regexp(
		"ParamName=door_date",
		"RegExp=AccoutGroupDownload_(.*?)\\.xlsx",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

	web_submit_data("zkau_31",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t38.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onClick", "ENDITEM",
		"Name=uuid_0", "Value=<downloadDoor_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"pageX\":130,\"pageY\":69,\"which\":1,\"x\":12,\"y\":5}", "ENDITEM",
		"LAST");
	
	web_submit_data("zkau_31_1",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Mode=HTML",
		"EXTRARES",
		"URL=zkau/view/<doorInfo_dtid}/dwnmed-<door_downloadNum}/<door_xlsx}/AccoutGroupDownload_<door_date}.xlsx", "Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry", "ENDITEM",
		"LAST");	

	lr_end_transaction("downloadAccountGroup",2);

	lr_think_time(3);

	lr_start_transaction("dragDown");

	web_submit_data("zkau_32",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t39.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onCellFocus", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_sheetId}_3\",\"row\":1,\"col\":3}", "ENDITEM",
		"LAST");

	web_submit_data("zkau_33",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t40.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":120,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", "ENDITEM",
		"LAST");

	web_submit_data("zkau_34",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t41.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":120,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", "ENDITEM",
		"LAST");

	web_submit_data("zkau_35",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t42.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onZSSFetchActiveRange", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_sheetId}_3\",\"top\":238,\"left\":0,\"right\":27,\"bottom\":309}", "ENDITEM",
		"Name=cmd_1", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_1", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":171,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", "ENDITEM",
		"LAST");

	web_submit_data("zkau_36",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t43.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":171,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":309}", "ENDITEM",
		"Name=cmd_1", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_1", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":171,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":309}", "ENDITEM",
		"Name=cmd_2", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_2", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_2", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":212,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":309}", "ENDITEM",
		"LAST");

	web_submit_data("zkau_37",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t44.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":212,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":309}", "ENDITEM",
		"LAST");

	web_submit_data("zkau_38",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t45.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":267,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":309}", "ENDITEM",
		"LAST");

	web_submit_data("zkau_39",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t46.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":267,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":309}", "ENDITEM",
		"Name=cmd_1", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_1", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":309,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":309}", "ENDITEM",
		"LAST");

	web_submit_data("zkau_40",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t47.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":309,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":309}", "ENDITEM",
		"LAST");

	web_submit_data("zkau_41",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t48.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":309,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":309}", "ENDITEM",
		"Name=cmd_1", "Value=onZSSSyncBlock", "ENDITEM",
		"Name=uuid_1", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":309,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":309}", "ENDITEM",
		"LAST");

	lr_end_transaction("dragDown",2);

	lr_think_time(3);

	lr_start_transaction("saveCloseAccountGroup");

	web_submit_data("zkau_42",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t49.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<doorInfo_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onCellFocus", "ENDITEM",
		"Name=uuid_0", "Value=<doorInfo_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_sheetId}_3\",\"row\":1,\"col\":3}", "ENDITEM",
		"Name=cmd_1", "Value=onClick", "ENDITEM",
		"Name=uuid_1", "Value=<doorSaveClose_uuid}", "ENDITEM",
		"Name=data_1", "Value={\"pageX\":43,\"pageY\":70,\"which\":1,\"x\":3,\"y\":6}", "ENDITEM",
		"LAST");
 
# 1098 "DoorInfo.c"

 
	web_reg_save_param_regexp(
		"ParamName=dump_03",
		"RegExp=dump=(.*?)\">Security\\ Setup",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

	web_url("efsnPackage.do_userGoHome", 
		"URL=https://<url}/bin-java/efsnPackage.do_userGoHome", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("efsnPackage.do_logicalWorkflow_3",
		"URL=https://<url}/bin-java/efsnPackage.do_logicalWorkflow?dump=1",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://<url}/bin-java/efsnPackage.do_userGoHome",
		"Snapshot=t52.inf",
		"Mode=HTML",
		"LAST");

	lr_end_transaction("saveCloseAccountGroup",2);

	return 0;
}
# 5 "c:\\tmp\\ck\\\\combined_CK.c" 2

# 1 "Security.c" 1
Security()
{
	int pageY,Y,n,r = 22;
	int security_round = 0;  
 
		
	lr_think_time(3);
	
	lr_start_transaction("loadSecurity");

 
	web_reg_save_param_regexp(
		"ParamName=dump_04",
		"RegExp=dump=(.*?)'\\),",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

	web_url("efsnPackage.do_securityEntry",
		"URL=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://<url}/bin-java/efsnPackage.do_userGoHome",
		"Snapshot=t53.inf",
		"Mode=HTML",
		"LAST");

	web_url("efsnPackage.do_logicalWorkflow_4",
		"URL=https://<url}/bin-java/efsnPackage.do_logicalWorkflow?dump=1",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t54.inf",
		"Mode=HTML",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=security_dtid",
		"RegExp=,\\{dt:'(.*?)',cu:",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=newGroup_textBox",
		"RegExp=\\['zul\\.inp\\.Textbox','(.*?)',\\{",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=newGroup_addBtn",
		"RegExp=\\['zul\\.wgt\\.Button','(.*?)',\\{",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=renameGroup_dropdown",
		"RegExp=\\['zul\\.sel\\.Select','(.*?)',\\{id:'lbrenamegroup',",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=renameGroup_submit",
		"RegExp=\\['zul\\.wgt\\.Button','(.*?)',\\{",
		"Ordinal=2",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=securityGroups_uuid",
		"RegExp=\\['zul\\.sel\\.Listbox','(.*?)',\\{id:'lb',",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=deleteGroup_uuid",
		"RegExp=\\['zul\\.menu\\.Menuitem','(.*?)',\\{id:'mdeleteselectedi'",
		"Ordinal=1",   
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=group_header",
		"RegExp=\\['zul\\.sel\\.Listheader','(.*?)',\\{",
		"Ordinal=10",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=user_header",
		"RegExp=\\['zul\\.sel\\.Listheader','(.*?)',\\{",
		"Ordinal=11",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=login_header",
		"RegExp=\\['zul\\.sel\\.Listheader','(.*?)',\\{",
		"Ordinal=12",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		"LAST");
		
 
	web_reg_save_param_regexp(
		"ParamName=rename_textBox",
		"RegExp=\\['zul\\.inp\\.Textbox','(.*?)',\\{",
		"Ordinal=2",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=filterGroup_textBox",
		"RegExp=\\['zul\\.inp\\.Textbox','(.*?)',\\{",
		"Ordinal=143",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=security_tab_01",
		"RegExp=\\['zul\\.tab\\.Tab','(.*?)',\\{id:",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		"LAST");

	web_url("do_loadZKTemplate_2",
		"URL=https://<url}/bin-java/zk/do_loadZKTemplate?dump=<dump_04}&f=security.zul&zk.redrawCtrl=page&dump=<dump_03}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t55.inf",
		"Mode=HTML",
		"EXTRARES",
		"URL=../zkau/web/_zv2015042817/js/zhtml.wpd", "Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}", "ENDITEM",
		"URL=/javascript/zul.js?_=1479951685370", "Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}", "ENDITEM",
		"URL=/images/common/disabed_bg_stripe.png", "Referer=https://<url}/bin-java/zkau/web/b34f6723/_zkiju-zkstyle/zul/css/zk.wcs", "ENDITEM",
		"URL=../zkau/web/b34f6723/zkstyle/zul/img/common/bar-bg.png", "Referer=https://<url}/bin-java/zkau/web/b34f6723/_zkiju-zkstyle/zul/css/zk.wcs", "ENDITEM",
		"LAST");

	lr_end_transaction("loadSecurity",2);

	lr_think_time(5);

	web_submit_data("zkau_43",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t56.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<security_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onChange", "ENDITEM",
		"Name=uuid_0", "Value=<newGroup_textBox}", "ENDITEM",
		"Name=data_0", "Value={\"value\":\"<groupName}\",\"start\":<groupNameLen}}", "ENDITEM",
		"LAST");

	lr_think_time(5);
	
	lr_rendezvous("newGroups");

	lr_start_transaction("newGroup");

 
 	
# 227 "Security.c"

	web_reg_save_param_regexp(
		"ParamName=renameGroup_options",
		"RegExp=\\['zul\\.sel\\.Option','(.*?)',\\{",
		"Ordinal=all",  
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");		

	web_reg_save_param_regexp(
		"ParamName=renameGroup_optionsName",
 
		"RegExp=\\{\\$\\$0onSwipe:true,\\$\\$0onAfterSize:true,label:'(.*?)'\\},\\[\\]\\]\\]",
		"Ordinal=all",  
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");	
	
	web_submit_data("zkau_44",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t57.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<security_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onClick", "ENDITEM",
		"Name=uuid_0", "Value=<newGroup_addBtn}", "ENDITEM",
		"Name=data_0", "Value={\"pageX\":343,\"pageY\":100,\"which\":1,\"x\":22,\"y\":11}", "ENDITEM",
		"LAST");

	lr_end_transaction("newGroup",2);	
	
	for(; r<= atoi(lr_eval_string("<renameGroup_optionsName_count}"));r++)

    {

        if(stricmp(lr_paramarr_idx("renameGroup_optionsName",r),lr_eval_string("<groupName}"))== 0 ){
        	lr_save_string(lr_paramarr_idx("renameGroup_options",r), "renameGroup_option");
        		
        }

           
	}	
	
	lr_think_time(5);

	web_submit_data("zkau_45",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t58.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<security_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onSelect", "ENDITEM",
		"Name=uuid_0", "Value=<renameGroup_dropdown}", "ENDITEM",
		"Name=data_0", "Value={\"items\":[\"<renameGroup_option}\"],\"reference\":\"<renameGroup_option}\"}", "ENDITEM",
		"LAST");

 
 
# 308 "Security.c"
	web_submit_data("zkau_46",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t59.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<security_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onChange", "ENDITEM",
		"Name=uuid_0", "Value=<rename_textBox}", "ENDITEM",
		"Name=data_0", "Value={\"value\":\"<groupName}_rename\",\"start\":<renameLen}}", "ENDITEM",
		"LAST");

	lr_think_time(5);
	

	lr_start_transaction("renameGroup");

 
	web_reg_save_param_regexp(
		"ParamName=deleteGroup_checkBoxs",
		"RegExp=\\['zul\\.sel\\.Listitem','(.*?)',\\{",
 
		"Ordinal=all",  
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");
		
	 
	web_reg_save_param_regexp(
		"ParamName=deleteGroup_checkLabels",
		"RegExp=\\{\\$\\$0onSwipe:true,\\$\\$0onAfterSize:true,sclass:'firstrowcell',label:'(.*?)'\\},\\[\\]\\],",
		"Ordinal=all",  
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");		

	web_submit_data("zkau_47",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t60.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<security_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onClick", "ENDITEM",
		"Name=uuid_0", "Value=<renameGroup_submit}", "ENDITEM",
		"Name=data_0", "Value={\"pageX\":855,\"pageY\":95,\"which\":1,\"x\":23,\"y\":6}", "ENDITEM",
		"LAST");

	lr_end_transaction("renameGroup",2);
	
	r = 242;
	for(n=21; n<= atoi(lr_eval_string("<deleteGroup_checkLabels_count}")); n++)

    {

        if(stricmp(lr_paramarr_idx("deleteGroup_checkLabels",n),lr_eval_string("<groupName}_RENAME"))== 0 ){
        	lr_save_string(lr_paramarr_idx("deleteGroup_checkBoxs",r), "deleteGroup_checkBox");
        	pageY = 437 + (n-20)*20;
        	Y = 322 + (n-20)*20;
        	lr_save_int(pageY, "deleteGroupRow_pageY");
        	lr_save_int(Y, "deleteGroupRow_Y");		
        }

          r++; 
	}		

	lr_think_time(5);

	web_submit_data("zkau_48",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t61.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<security_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onScrollPos", "ENDITEM",
		"Name=uuid_0", "Value=<securityGroups_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"top\":133,\"left\":0}", "ENDITEM",
		"Name=cmd_1", "Value=onScrollPos", "ENDITEM",
		"Name=uuid_1", "Value=<securityGroups_uuid}", "ENDITEM",
		"Name=data_1", "Value={\"top\":137,\"left\":0}", "ENDITEM",
		"Name=cmd_2", "Value=onScrollPos", "ENDITEM",
		"Name=uuid_2", "Value=<securityGroups_uuid}", "ENDITEM",
		"Name=data_2", "Value={\"top\":139,\"left\":0}", "ENDITEM",
		"Name=cmd_3", "Value=onScrollPos", "ENDITEM",
		"Name=uuid_3", "Value=<securityGroups_uuid}", "ENDITEM",
		"Name=data_3", "Value={\"top\":152,\"left\":0}", "ENDITEM",
		"Name=cmd_4", "Value=onAnchorPos", "ENDITEM",
		"Name=uuid_4", "Value=<securityGroups_uuid}", "ENDITEM",
		"Name=data_4", "Value={\"top\":414,\"left\":0}", "ENDITEM",
		"Name=cmd_5", "Value=onSelect", "ENDITEM",
		"Name=uuid_5", "Value=<securityGroups_uuid}", "ENDITEM",
 
		"Name=data_5", "Value={\"items\":[\"<deleteGroup_checkBox}\"],\"reference\":\"<deleteGroup_checkBox}\",\"clearFirst\":false,\"selectAll\":true,\"pageX\":33,\"pageY\":437,\"which\":1,\"x\":14,\"y\":322}", "ENDITEM",
		"LAST");

	lr_think_time(5);

	lr_start_transaction("deleteGroup");

	web_submit_data("zkau_49",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t62.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<security_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onClick", "ENDITEM",
		"Name=uuid_0", "Value=<deleteGroup_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"pageX\":129,\"pageY\":73,\"which\":1,\"x\":17,\"y\":9}", "ENDITEM",
		"LAST");

	lr_end_transaction("deleteGroup",2);

	lr_think_time(5);

	lr_start_transaction("sortGroup");

	web_submit_data("zkau_50",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t63.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<security_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onScrollPos", "ENDITEM",
		"Name=uuid_0", "Value=<securityGroups_uuid}", "ENDITEM",
		"Name=data_0", "Value={\"top\":113,\"left\":0}", "ENDITEM",
		"Name=cmd_1", "Value=onSort", "ENDITEM",
		"Name=uuid_1", "Value=<group_header}", "ENDITEM",
		"Name=data_1", "Value={\"\":true}", "ENDITEM",
		"LAST");

	lr_end_transaction("sortGroup",2);

	lr_think_time(5);

	lr_start_transaction("sortUser");

	web_submit_data("zkau_51",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t64.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<security_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onSort", "ENDITEM",
		"Name=uuid_0", "Value=<user_header}", "ENDITEM",
		"Name=data_0", "Value={\"\":true}", "ENDITEM",
		"LAST");

	lr_end_transaction("sortUser",2);

	lr_think_time(5);

	lr_start_transaction("sortLogin");

	web_submit_data("zkau_52",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t65.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<security_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onSort", "ENDITEM",
		"Name=uuid_0", "Value=<login_header}", "ENDITEM",
		"Name=data_0", "Value={\"\":true}", "ENDITEM",
		"LAST");

	lr_end_transaction("sortLogin",2);

	lr_think_time(5);

	lr_start_transaction("filterGroup");

	web_submit_data("zkau_53",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t66.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<security_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onChange", "ENDITEM",
		"Name=uuid_0", "Value=<filterGroup_textBox}", "ENDITEM",
		"Name=data_0", "Value={\"value\":\"a\",\"start\":1}", "ENDITEM",
		"LAST");

	lr_end_transaction("filterGroup",2);

	lr_think_time(5);

	lr_start_transaction("clearFilter");

 
	web_reg_save_param_regexp(
		"ParamName=groupEditBtn",
		"RegExp=\\['zul\\.wgt\\.Button','(.*?)',\\{",
		"Ordinal=<editBtnRow}",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

	web_submit_data("zkau_54",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t67.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<security_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onChange", "ENDITEM",
		"Name=uuid_0", "Value=<filterGroup_textBox}", "ENDITEM",
		"Name=data_0", "Value={\"value\":\"\",\"start\":0}", "ENDITEM",
		"LAST");

	lr_end_transaction("clearFilter",2);

	lr_think_time(5);

	lr_start_transaction("clickEditBtn");

 



	web_reg_save_param_regexp(
		"ParamName=filterDivision_dropdown",
		"RegExp=\\['zul\\.sel\\.Select','(.*?)',\\{id:'7th Division',",
		"Ordinal=1",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=filterDivision_option",
		"RegExp=\\['zul\\.sel\\.Option','(.*?)',\\{",
		"Ordinal=18",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=filterBtn",
		"RegExp=\\['zul\\.wgt\\.Button','(.*?)',\\{",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

 



	web_reg_save_param_regexp(
		"ParamName=saveOnCustom",
		"RegExp=\\['zul\\.menu\\.Menuitem','(.*?)',\\{id:'msave'",
		"Ordinal=1",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

 



	web_reg_save_param_regexp(
		"ParamName=downloadCustomTemplate",
		"RegExp=\\['zul\\.menu\\.Menuitem','(.*?)',\\{id:'msecuritytemp'",
		"Ordinal=1",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

 



	web_reg_save_param_regexp(
		"ParamName=downloadCustomSecurity",
		"RegExp=\\['zul\\.menu\\.Menuitem','(.*?)',\\{id:'msecurityview'",
		"Ordinal=1",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

	web_submit_data("zkau_55",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t68.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<security_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onClick", "ENDITEM",
		"Name=uuid_0", "Value=<groupEditBtn}", "ENDITEM",
		"Name=data_0", "Value={\"pageX\":46,\"pageY\":<editBtn_PageY},\"which\":1,\"x\":26,\"y\":9}", "ENDITEM",
		"LAST");

	lr_end_transaction("clickEditBtn",2);

	lr_think_time(5);

	lr_start_transaction("filterDivision");

 
	web_reg_save_param_regexp(
		"ParamName=changeDefault_cell",
		"RegExp=\\['zul\\.inp\\.Textbox','(.*?)',\\{",
		"Ordinal=6",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=changeValue_cell_01",
		"RegExp=\\['zul\\.inp\\.Textbox','(.*?)',\\{",
		"Ordinal=11",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=changeValue_cell_02",
		"RegExp=\\['zul\\.inp\\.Textbox','(.*?)',\\{",
		"Ordinal=16",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=changeValue_cell_03",
		"RegExp=\\['zul\\.inp\\.Textbox','(.*?)',\\{",
		"Ordinal=21",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=changeValue_cell_04",
		"RegExp=\\['zul\\.inp\\.Textbox','(.*?)',\\{",
		"Ordinal=26",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=changeValue_cell_05",
		"RegExp=\\['zul\\.inp\\.Textbox','(.*?)',\\{",
		"Ordinal=31",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=changeValue_cell_06",
		"RegExp=\\['zul\\.inp\\.Textbox','(.*?)',\\{",
		"Ordinal=36",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=changeValue_cell_07",
		"RegExp=\\['zul\\.inp\\.Textbox','(.*?)',\\{",
		"Ordinal=41",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=changeValue_cell_08",
		"RegExp=\\['zul\\.inp\\.Textbox','(.*?)',\\{",
		"Ordinal=46",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=changeValue_cell_09",
		"RegExp=\\['zul\\.inp\\.Textbox','(.*?)',\\{",
		"Ordinal=51",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=changeValue_cell_10",
		"RegExp=\\['zul\\.inp\\.Textbox','(.*?)',\\{",
		"Ordinal=56",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=changeValue_cell_11",
		"RegExp=\\['zul\\.inp\\.Textbox','(.*?)',\\{",
		"Ordinal=61",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

	web_submit_data("zkau_56",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t69.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<security_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onSelect", "ENDITEM",
		"Name=uuid_0", "Value=<filterDivision_dropdown}", "ENDITEM",
		"Name=data_0", "Value={\"items\":[\"<filterDivision_option}\"],\"reference\":\"<filterDivision_option}\"}", "ENDITEM",
		"Name=cmd_1", "Value=onClick", "ENDITEM",
		"Name=uuid_1", "Value=<filterBtn}", "ENDITEM",
		"Name=data_1", "Value={\"pageX\":565,\"pageY\":116,\"which\":1,\"x\":11,\"y\":9}", "ENDITEM",
		"LAST");

	lr_end_transaction("filterDivision",2);

	lr_think_time(5);

	lr_start_transaction("changeDefault");

	web_submit_data("zkau_57",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t70.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<security_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onChange", "ENDITEM",
		"Name=uuid_0", "Value=<changeDefault_cell}", "ENDITEM",
		"Name=data_0", "Value={\"value\":\"View\",\"start\":4}", "ENDITEM",
		"LAST");

	web_submit_data("zkau_58",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t71.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<security_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onChange", "ENDITEM",
		"Name=uuid_0", "Value=<changeDefault_cell}", "ENDITEM",
		"Name=data_0", "Value={\"value\":\"View\"}", "ENDITEM",
		"Name=cmd_1", "Value=onChange", "ENDITEM",
		"Name=uuid_1", "Value=<changeValue_cell_01}", "ENDITEM",
		"Name=data_1", "Value={\"value\":\"View\"}", "ENDITEM",
		"Name=cmd_2", "Value=onChange", "ENDITEM",
		"Name=uuid_2", "Value=<changeValue_cell_02}", "ENDITEM",
		"Name=data_2", "Value={\"value\":\"View\"}", "ENDITEM",
		"Name=cmd_3", "Value=onChange", "ENDITEM",
		"Name=uuid_3", "Value=<changeValue_cell_03}", "ENDITEM",
		"Name=data_3", "Value={\"value\":\"View\"}", "ENDITEM",
		"Name=cmd_4", "Value=onChange", "ENDITEM",
		"Name=uuid_4", "Value=<changeValue_cell_04}", "ENDITEM",
		"Name=data_4", "Value={\"value\":\"View\"}", "ENDITEM",
		"Name=cmd_5", "Value=onChange", "ENDITEM",
		"Name=uuid_5", "Value=<changeValue_cell_05}", "ENDITEM",
		"Name=data_5", "Value={\"value\":\"View\"}", "ENDITEM",
		"Name=cmd_6", "Value=onChange", "ENDITEM",
		"Name=uuid_6", "Value=<changeValue_cell_06}", "ENDITEM",
		"Name=data_6", "Value={\"value\":\"View\"}", "ENDITEM",
		"Name=cmd_7", "Value=onChange", "ENDITEM",
		"Name=uuid_7", "Value=<changeValue_cell_07}", "ENDITEM",
		"Name=data_7", "Value={\"value\":\"View\"}", "ENDITEM",
		"Name=cmd_8", "Value=onChange", "ENDITEM",
		"Name=uuid_8", "Value=<changeValue_cell_08}", "ENDITEM",
		"Name=data_8", "Value={\"value\":\"View\"}", "ENDITEM",
		"Name=cmd_9", "Value=onChange", "ENDITEM",
		"Name=uuid_9", "Value=<changeValue_cell_09}", "ENDITEM",
		"Name=data_9", "Value={\"value\":\"View\"}", "ENDITEM",
		"Name=cmd_10", "Value=onChange", "ENDITEM",
		"Name=uuid_10", "Value=<changeValue_cell_10}", "ENDITEM",
		"Name=data_10", "Value={\"value\":\"View\"}", "ENDITEM",
		"Name=cmd_11", "Value=onChange", "ENDITEM",
		"Name=uuid_11", "Value=<changeValue_cell_11}", "ENDITEM",
		"Name=data_11", "Value={\"value\":\"View\"}", "ENDITEM",
		"Name=cmd_12", "Value=onChange", "ENDITEM",
		"Name=uuid_12", "Value=<changeDefault_cell}", "ENDITEM",
		"Name=data_12", "Value={\"value\":\"View\"}", "ENDITEM",
		"Name=cmd_13", "Value=onChange", "ENDITEM",
		"Name=uuid_13", "Value=<changeValue_cell_01}", "ENDITEM",
		"Name=data_13", "Value={\"value\":\"View\"}", "ENDITEM",
		"Name=cmd_14", "Value=onChange", "ENDITEM",
		"Name=uuid_14", "Value=<changeValue_cell_02}", "ENDITEM",
		"Name=data_14", "Value={\"value\":\"View\"}", "ENDITEM",
		"Name=cmd_15", "Value=onChange", "ENDITEM",
		"Name=uuid_15", "Value=<changeValue_cell_03}", "ENDITEM",
		"Name=data_15", "Value={\"value\":\"View\"}", "ENDITEM",
		"Name=cmd_16", "Value=onChange", "ENDITEM",
		"Name=uuid_16", "Value=<changeValue_cell_04}", "ENDITEM",
		"Name=data_16", "Value={\"value\":\"View\"}", "ENDITEM",
		"Name=cmd_17", "Value=onChange", "ENDITEM",
		"Name=uuid_17", "Value=<changeValue_cell_05}", "ENDITEM",
		"Name=data_17", "Value={\"value\":\"View\"}", "ENDITEM",
		"Name=cmd_18", "Value=onChange", "ENDITEM",
		"Name=uuid_18", "Value=<changeValue_cell_06}", "ENDITEM",
		"Name=data_18", "Value={\"value\":\"View\"}", "ENDITEM",
		"Name=cmd_19", "Value=onChange", "ENDITEM",
		"Name=uuid_19", "Value=<changeValue_cell_07}", "ENDITEM",
		"Name=data_19", "Value={\"value\":\"View\"}", "ENDITEM",
		"Name=cmd_20", "Value=onChange", "ENDITEM",
		"Name=uuid_20", "Value=<changeValue_cell_08}", "ENDITEM",
		"Name=data_20", "Value={\"value\":\"View\"}", "ENDITEM",
		"Name=cmd_21", "Value=onChange", "ENDITEM",
		"Name=uuid_21", "Value=<changeValue_cell_09}", "ENDITEM",
		"Name=data_21", "Value={\"value\":\"View\"}", "ENDITEM",
		"Name=cmd_22", "Value=onChange", "ENDITEM",
		"Name=uuid_22", "Value=<changeValue_cell_10}", "ENDITEM",
		"Name=data_22", "Value={\"value\":\"View\"}", "ENDITEM",
		"Name=cmd_23", "Value=onChange", "ENDITEM",
		"Name=uuid_23", "Value=<changeValue_cell_11}", "ENDITEM",
		"Name=data_23", "Value={\"value\":\"View\"}", "ENDITEM",
		"LAST");

	lr_end_transaction("changeDefault",2);

	lr_think_time(5);

	lr_start_transaction("saveOnCustomGroup");

 



	web_reg_save_param_regexp(
		"ParamName=saveMessageOnCustomGroup",
		"RegExp=\"rs\":\\[\\[\"showBusy\",\\[\\{\\$u:'(.*?)'},\"Processing...\"",
		"Ordinal=1",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

	web_submit_data("zkau_59",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t72.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<security_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onClick", "ENDITEM",
		"Name=uuid_0", "Value=<saveOnCustom}", "ENDITEM",
		"Name=data_0", "Value={\"pageX\":31,\"pageY\":76,\"which\":1,\"x\":12,\"y\":12}", "ENDITEM",
		"LAST");

	web_submit_data("zkau_60",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t73.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<security_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=echo", "ENDITEM",
		"Name=opt_0", "Value=i", "ENDITEM",
		"Name=uuid_0", "Value=<saveMessageOnCustomGroup}", "ENDITEM",
		"Name=data_0", "Value={\"\":[\"onSave\",0]}", "ENDITEM",
		"LAST");

	lr_end_transaction("saveOnCustomGroup",2);
		
	lr_save_int(security_round,"templateCustom_downloadNum");	
	
	lr_think_time(5);

	lr_start_transaction("downloadTemplateOnCustomGroup");
	
 



	web_reg_save_param_regexp(
		"ParamName=templateCustom_xlsx",
		"RegExp=dwnmed-<templateCustom_downloadNum}\\\\/(.*?)\\\\/SecurityTemplateDownload",
		"Ordinal=1",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");		
	

 
	web_reg_save_param_regexp(
		"ParamName=templateCustomDate",
		"RegExp=SecurityTemplateDownload_(.*?)\"]]],",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

	web_submit_data("zkau_61",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t74.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<security_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onClick", "ENDITEM",
		"Name=uuid_0", "Value=<downloadCustomTemplate}", "ENDITEM",
		"Name=data_0", "Value={\"pageX\":75,\"pageY\":70,\"which\":1,\"x\":12,\"y\":6}", "ENDITEM",
 
 
		"LAST");
	
	web_submit_data("zkau_61_1",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Mode=HTML",
		"ITEMDATA",
		"EXTRARES",
		"URL=zkau/view/<security_dtid}/dwnmed-<templateCustom_downloadNum}/<templateCustom_xlsx}/SecurityTemplateDownload_<templateCustomDate}", "Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}", "ENDITEM",
		"LAST");		

	lr_end_transaction("downloadTemplateOnCustomGroup",2);


	security_round++;
	lr_save_int(security_round,"securityCustom_downloadNum");
	
	lr_think_time(5);

	lr_start_transaction("downloadAccessOnCustomGroup");
	
 



	web_reg_save_param_regexp(
		"ParamName=securityCustom_xlsx",
		"RegExp=dwnmed-<securityCustom_downloadNum}\\\\/(.*?)\\\\/SecurityAccessDownload",
		"Ordinal=1",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");		

 
	web_reg_save_param_regexp(
		"ParamName=securityCustomDate",
		"RegExp=SecurityAccessDownload_(.*?)\\.xlsx",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

	web_submit_data("zkau_62",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t75.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<security_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onClick", "ENDITEM",
		"Name=uuid_0", "Value=<downloadCustomSecurity}", "ENDITEM",
		"Name=data_0", "Value={\"pageX\":96,\"pageY\":70,\"which\":1,\"x\":8,\"y\":6}", "ENDITEM",
 
 
		"LAST");
	
	web_submit_data("zkau_62_1",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Mode=HTML",
		"ITEMDATA",
		"EXTRARES",
		"URL=zkau/view/<security_dtid}/dwnmed-<securityCustom_downloadNum}/<securityCustom_xlsx}/SecurityAccessDownload_<securityCustomDate}.xlsx", "Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}", "ENDITEM",
		"LAST");		

	lr_end_transaction("downloadAccessOnCustomGroup",2);

	lr_think_time(5);

	lr_start_transaction("switchTab");

 
	web_reg_save_param_regexp(
		"ParamName=editBtn_02",
		"RegExp=\\['zul\\.wgt\\.Button','(.*?)',\\{",
		"Ordinal=<editBtnRow}",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

	web_submit_data("zkau_63",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t76.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<security_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onSelect", "ENDITEM",
		"Name=uuid_0", "Value=<security_tab_01}", "ENDITEM",
		"Name=data_0", "Value={\"items\":[\"<security_tab_01}\"],\"reference\":\"<security_tab_01}\"}", "ENDITEM",
		"LAST");

	lr_end_transaction("switchTab",2);

	lr_think_time(5);

	lr_start_transaction("clickEditBtn_2");

 
	web_reg_save_param_regexp(
		"ParamName=saveCloseOnCustomGroup",
		"RegExp=\\['zul\\.menu\\.Menuitem','(.*?)',\\{id:'msaveclose'",
		"Ordinal=1",   
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

	web_submit_data("zkau_64",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t77.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<security_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onClick", "ENDITEM",
		"Name=uuid_0", "Value=<editBtn_02}", "ENDITEM",
 
 
		"Name=data_0", "Value={\"pageX\":46,\"pageY\":<editBtn_PageY},\"which\":1,\"x\":26,\"y\":9}", "ENDITEM",			
		"LAST");

	lr_end_transaction("clickEditBtn_2",2);

	lr_think_time(5);

	lr_start_transaction("saveCloseOnCustomGroup");

	web_submit_data("zkau_65",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t78.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<security_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onClick", "ENDITEM",
		"Name=uuid_0", "Value=<saveCloseOnCustomGroup}", "ENDITEM",
		"Name=data_0", "Value={\"pageX\":47,\"pageY\":74,\"which\":1,\"x\":7,\"y\":10}", "ENDITEM",
		"LAST");

 

 



	web_reg_save_param_regexp(
		"ParamName=downloadTemplate",
		"RegExp=\\['zul\\.menu\\.Menuitem','(.*?)',\\{id:'msecuritytemp',",
		"Ordinal=1",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

 



	web_reg_save_param_regexp(
		"ParamName=downloadSecurity",
		"RegExp=\\['zul\\.menu\\.Menuitem','(.*?)',\\{id:'msecurityview'",
		"Ordinal=1",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

 



	web_reg_save_param_regexp(
		"ParamName=saveCloseSecurity",
		"RegExp=\\['zul\\.menu\\.Menuitem','(.*?)',\\{id:'msaveclose'",
		"Ordinal=1",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

	web_submit_data("zkau_66",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t79.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<security_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=echo", "ENDITEM",
		"Name=opt_0", "Value=i", "ENDITEM",
		"Name=uuid_0", "Value=<saveMessageOnCustomGroup}", "ENDITEM",
		"Name=data_0", "Value={\"\":[\"onSave\",0]}", "ENDITEM",
		"LAST");

	lr_end_transaction("saveCloseOnCustomGroup",2);

	security_round++;
	lr_save_int(security_round,"tempalte_downloadNum");	

	lr_think_time(5);
	

	lr_start_transaction("downloadTemplateOnGroups");
	
 



	web_reg_save_param_regexp(
		"ParamName=tempalte_xlsx",
		"RegExp=dwnmed-<tempalte_downloadNum}\\\\/(.*?)\\\\/SecurityTemplateDownload",
		"Ordinal=1",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");	

 
	web_reg_save_param_regexp(
		"ParamName=downloadTemplateDate",
		"RegExp=SecurityTemplateDownload_(.*?)\\.xlsx",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

	web_submit_data("zkau_67",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t80.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<security_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onClick", "ENDITEM",
		"Name=uuid_0", "Value=<downloadTemplate}", "ENDITEM",
		"Name=data_0", "Value={\"pageX\":75,\"pageY\":70,\"which\":1,\"x\":12,\"y\":6}", "ENDITEM",
 
 
		"LAST");

	web_submit_data("zkau_67_1",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Mode=HTML",
		"ITEMDATA",
		"EXTRARES",
		"URL=zkau/view/<security_dtid}/dwnmed-<tempalte_downloadNum}/<tempalte_xlsx}/SecurityTemplateDownload_<downloadTemplateDate}.xlsx", "Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}", "ENDITEM",
		"LAST");		
	
	lr_end_transaction("downloadTemplateOnGroups",2);
	
	security_round++;
	lr_save_int(security_round,"security_downloadNum");		

	lr_think_time(5);

	lr_start_transaction("downloadAccessOnGroups");
	
 



	web_reg_save_param_regexp(
		"ParamName=security_xlsx",
		"RegExp=dwnmed-<security_downloadNum}\\\\/(.*?)\\\\/SecurityAccessDownload",
		"Ordinal=1",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");		

 
	web_reg_save_param_regexp(
		"ParamName=downloadSecurityDate",
		"RegExp=SecurityAccessDownload_(.*?)\\.xlsx",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

	web_submit_data("zkau_68",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t81.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<security_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onClick", "ENDITEM",
		"Name=uuid_0", "Value=<downloadSecurity}", "ENDITEM",
		"Name=data_0", "Value={\"pageX\":98,\"pageY\":70,\"which\":1,\"x\":10,\"y\":6}", "ENDITEM",
 
 
		"LAST");
	
	web_submit_data("zkau_68_1",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Mode=HTML",
		"EXTRARES",
		"URL=zkau/view/<security_dtid}/dwnmed-<security_downloadNum}/<security_xlsx}/SecurityAccessDownload_<downloadSecurityDate}.xlsx", "Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}", "ENDITEM",
		"LAST");			

	lr_end_transaction("downloadAccessOnGroups",2);

	lr_think_time(5);

	lr_start_transaction("saveCloseOnGroups");

	web_submit_data("zkau_69",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t82.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<security_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=onClick", "ENDITEM",
		"Name=uuid_0", "Value=<saveCloseSecurity}", "ENDITEM",
		"Name=data_0", "Value={\"pageX\":52,\"pageY\":70,\"which\":1,\"x\":12,\"y\":6}", "ENDITEM",
		"LAST");

	web_submit_data("zkau_70",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t83.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=dtid", "Value=<security_dtid}", "ENDITEM",
		"Name=cmd_0", "Value=echo", "ENDITEM",
		"Name=opt_0", "Value=i", "ENDITEM",
		"Name=uuid_0", "Value=<saveMessageOnCustomGroup}", "ENDITEM",
		"Name=data_0", "Value={\"\":[\"onSave\",0]}", "ENDITEM",
		"Name=cmd_1", "Value=echo", "ENDITEM",
		"Name=opt_1", "Value=i", "ENDITEM",
		"Name=uuid_1", "Value=<saveMessageOnCustomGroup}", "ENDITEM",
		"Name=data_1", "Value={\"\":[\"onSave\",1]}", "ENDITEM",
		"EXTRARES",
		"URL=zkau?dtid=<security_dtid}&cmd_0=rmDesktop&opt_0=i", "Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}", "ENDITEM",
		"LAST");

	web_url("efsnPackage.do_userGoHome_2",
		"URL=https://<url}/bin-java/efsnPackage.do_userGoHome",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t84.inf",
		"Mode=HTML",
		"LAST");

	web_url("efsnPackage.do_logicalWorkflow_5",
		"URL=https://<url}/bin-java/efsnPackage.do_logicalWorkflow?dump=1",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://<url}/bin-java/efsnPackage.do_userGoHome",
		"Snapshot=t85.inf",
		"Mode=HTML",
		"LAST");

	lr_end_transaction("saveCloseOnGroups",2);

	return 0;
}
# 6 "c:\\tmp\\ck\\\\combined_CK.c" 2

# 1 "Action1.c" 1
Action1()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	web_url("10.125.2.179", 
		"URL=https://10.125.2.179/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t87.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/favicon.ico", "Referer=", "ENDITEM", 
		"Url=/branding/7thonline/os_bg.jpg", "Referer=https://10.125.2.179/branding/7thonline/login.css", "ENDITEM", 
		"Url=/branding/7thonline/7thonline_logo.svgz", "Referer=https://10.125.2.179/branding/7thonline/login.css", "ENDITEM", 
		"Url=/branding/7thonline/login.gif", "Referer=https://10.125.2.179/branding/7thonline/login.css", "ENDITEM", 
		"Url=/branding/7thonline/bg_username.gif", "Referer=https://10.125.2.179/branding/7thonline/login.css", "ENDITEM", 
		"Url=/branding/7thonline/bg_password.gif", "Referer=https://10.125.2.179/branding/7thonline/login.css", "ENDITEM", 
		"Url=/images/common/loadingAnimation.gif", "Referer=https://10.125.2.179/bin-java/login?f=general/login.htm", "ENDITEM", 
		"Url=/branding/7thonline/button_bg.gif", "Referer=https://10.125.2.179/branding/7thonline/login.css", "ENDITEM", 
		"Url=/branding/7thonline/x.gif", "Referer=https://10.125.2.179/branding/7thonline/login.css", "ENDITEM", 
		"LAST");

	web_add_cookie("map=true; DOMAIN=10.125.2.179");

	web_submit_data("efsnPackage.do_userAuth", 
		"Action=https://10.125.2.179/bin-java/efsnPackage.do_userAuth", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://10.125.2.179/bin-java/login?f=general/login.htm", 
		"Snapshot=t88.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=login", "Value=jip", "ENDITEM", 
		"Name=passwd", "Value=wuhan02", "ENDITEM", 
		"Name=login", "Value=Wait", "ENDITEM", 
		"Name=map", "Value=on", "ENDITEM", 
		"EXTRARES", 
		"Url=../branding/7thonline/btn-nav-search-top_bt.png", "Referer=https://10.125.2.179/branding/7thonline/stylesheet.css", "ENDITEM", 
		"Url=../branding/7thonline/bg-nav-search-top_grey.gif", "Referer=https://10.125.2.179/branding/7thonline/stylesheet.css", "ENDITEM", 
		"Url=../branding/7thonline/sidetab_bt.png", "Referer=https://10.125.2.179/branding/7thonline/stylesheet.css", "ENDITEM", 
		"Url=../images/common/checkbox_s.gif", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_userGoHome;jsessionid=2D225E2CF8D7DE4A32AECFB2F0733508.tomcat01?dump=1", "ENDITEM", 
		"Url=../images/common/tip.gif", "Referer=https://10.125.2.179/javascript/7thonline_default_v4.css", "ENDITEM", 
		"Url=../branding/7thonline/bg-nav-search-bottom_trans.png", "Referer=https://10.125.2.179/branding/7thonline/stylesheet.css", "ENDITEM", 
		"Url=../branding/7thonline/loader-whiteonblue.gif", "Referer=https://10.125.2.179/branding/7thonline/stylesheet.css", "ENDITEM", 
		"LAST");

	web_url("efsnPackage.do_logicalWorkflow", 
		"URL=https://10.125.2.179/bin-java/efsnPackage.do_logicalWorkflow?dump=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://10.125.2.179/bin-java/efsnPackage.do_userGoHome;jsessionid=2D225E2CF8D7DE4A32AECFB2F0733508.tomcat01?dump=1", 
		"Snapshot=t89.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(8);

	web_url("efsnPackage.do_securityEntry", 
		"URL=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.6693488422814369", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://10.125.2.179/bin-java/efsnPackage.do_userGoHome;jsessionid=2D225E2CF8D7DE4A32AECFB2F0733508.tomcat01?dump=1", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("efsnPackage.do_logicalWorkflow_2", 
		"URL=https://10.125.2.179/bin-java/efsnPackage.do_logicalWorkflow?dump=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.6693488422814369", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("do_loadZKTemplate", 
		"URL=https://10.125.2.179/bin-java/zk/do_loadZKTemplate?dump=0.46383364552379525&f=security.zul&zk.redrawCtrl=page&dump=0.6693488422814369", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.6693488422814369", 
		"Snapshot=t92.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=../zkau/web/_zv3.9.0/js/zss.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.6693488422814369", "ENDITEM", 
		"Url=../zkau/web/_zv2015042817/js/zul.box.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.6693488422814369", "ENDITEM", 
		"Url=../zkau/web/_zv2015042817/js/zul.tab.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.6693488422814369", "ENDITEM", 
		"Url=../zkau/web/_zv2015042817/js/zul.mesh.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.6693488422814369", "ENDITEM", 
		"Url=../zkau/web/_zv2015042817/js/zul.inp.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.6693488422814369", "ENDITEM", 
		"Url=../zkau/web/_zv2015042817/js/zul.sel.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.6693488422814369", "ENDITEM", 
		"Url=../zkau/web/_zv2015042817/js/zhtml.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.6693488422814369", "ENDITEM", 
		"Url=../zkau/web/_zv2015042817/js/zul.utl.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.6693488422814369", "ENDITEM", 
		"Url=../zkau/web/_zv2015042817/js/zul.wnd.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.6693488422814369", "ENDITEM", 
		"Url=/javascript/zul.js?_=1480054471095", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.6693488422814369", "ENDITEM", 
		"Url=../zkau/web/_zv2015042817/js/zul.menu.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.6693488422814369", "ENDITEM", 
		"Url=../zkau/web/_zv2015042817/js/zk.fmt.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.6693488422814369", "ENDITEM", 
		"Url=../zkau/web/_zv2015042817/js/zul.layout.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.6693488422814369", "ENDITEM", 
		"Url=../zkau/web/_zv2015042817/js/zkex.inp.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.6693488422814369", "ENDITEM", 
		"Url=/images/common/close_grey.gif", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.6693488422814369", "ENDITEM", 
		"Url=../zkau/web/b34f6723/zkstyle/zul/img/menu/zk-menu-sprite.png", "Referer=https://10.125.2.179/bin-java/zkau/web/b34f6723/_zkiju-zkstyle/zul/css/zk.wcs", "ENDITEM", 
		"Url=/images/common/disabed_bg_stripe.png", "Referer=https://10.125.2.179/bin-java/zkau/web/b34f6723/_zkiju-zkstyle/zul/css/zk.wcs", "ENDITEM", 
		"Url=../zkau/web/b34f6723/zul/less/font/fontawesome-webfont.woff?v=4.0.1", "Referer=https://10.125.2.179/bin-java/zkau/web/b34f6723/_zkiju-zkstyle/zul/css/zk.wcs", "ENDITEM", 
		"Url=../zkau/web/b34f6723/zkstyle/zul/img/common/bar-bg.png", "Referer=https://10.125.2.179/bin-java/zkau/web/b34f6723/_zkiju-zkstyle/zul/css/zk.wcs", "ENDITEM", 
		"LAST");

	return 0;
}
# 7 "c:\\tmp\\ck\\\\combined_CK.c" 2

# 1 "Action2.c" 1
Action2()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	web_url("10.125.2.179", 
		"URL=https://10.125.2.179/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t93.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/favicon.ico", "Referer=", "ENDITEM", 
		"Url=/branding/7thonline/7thonline_logo.svgz", "Referer=https://10.125.2.179/branding/7thonline/login.css", "ENDITEM", 
		"Url=/branding/7thonline/bg_username.gif", "Referer=https://10.125.2.179/branding/7thonline/login.css", "ENDITEM", 
		"Url=/branding/7thonline/os_bg.jpg", "Referer=https://10.125.2.179/branding/7thonline/login.css", "ENDITEM", 
		"Url=/branding/7thonline/login.gif", "Referer=https://10.125.2.179/branding/7thonline/login.css", "ENDITEM", 
		"Url=/branding/7thonline/bg_password.gif", "Referer=https://10.125.2.179/branding/7thonline/login.css", "ENDITEM", 
		"Url=/branding/7thonline/button_bg.gif", "Referer=https://10.125.2.179/branding/7thonline/login.css", "ENDITEM", 
		"Url=/images/common/loadingAnimation.gif", "Referer=https://10.125.2.179/bin-java/login?f=general/login.htm", "ENDITEM", 
		"Url=/branding/7thonline/x.gif", "Referer=https://10.125.2.179/branding/7thonline/login.css", "ENDITEM", 
		"LAST");

	web_add_cookie("map=true; DOMAIN=10.125.2.179");

	web_submit_data("efsnPackage.do_userAuth", 
		"Action=https://10.125.2.179/bin-java/efsnPackage.do_userAuth", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://10.125.2.179/bin-java/login?f=general/login.htm", 
		"Snapshot=t94.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=login", "Value=jip", "ENDITEM", 
		"Name=passwd", "Value=wuhan02", "ENDITEM", 
		"Name=login", "Value=Wait", "ENDITEM", 
		"Name=map", "Value=on", "ENDITEM", 
		"EXTRARES", 
		"Url=../branding/7thonline/btn-nav-search-top_bt.png", "Referer=https://10.125.2.179/branding/7thonline/stylesheet.css", "ENDITEM", 
		"Url=../images/common/checkbox_s.gif", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_userGoHome;jsessionid=4731C025E561E733079771E59B5DCD75.tomcat01?dump=1", "ENDITEM", 
		"Url=../branding/7thonline/bg-nav-search-top_grey.gif", "Referer=https://10.125.2.179/branding/7thonline/stylesheet.css", "ENDITEM", 
		"Url=../branding/7thonline/sidetab_bt.png", "Referer=https://10.125.2.179/branding/7thonline/stylesheet.css", "ENDITEM", 
		"Url=../branding/7thonline/bg-nav-search-bottom_trans.png", "Referer=https://10.125.2.179/branding/7thonline/stylesheet.css", "ENDITEM", 
		"Url=../images/common/tip.gif", "Referer=https://10.125.2.179/javascript/7thonline_default_v4.css", "ENDITEM", 
		"Url=../branding/7thonline/loader-whiteonblue.gif", "Referer=https://10.125.2.179/branding/7thonline/stylesheet.css", "ENDITEM", 
		"LAST");

	web_url("efsnPackage.do_logicalWorkflow", 
		"URL=https://10.125.2.179/bin-java/efsnPackage.do_logicalWorkflow?dump=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://10.125.2.179/bin-java/efsnPackage.do_userGoHome;jsessionid=4731C025E561E733079771E59B5DCD75.tomcat01?dump=1", 
		"Snapshot=t95.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(4);

	web_url("efsnPackage.do_securityEntry", 
		"URL=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://10.125.2.179/bin-java/efsnPackage.do_userGoHome;jsessionid=4731C025E561E733079771E59B5DCD75.tomcat01?dump=1", 
		"Snapshot=t96.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("efsnPackage.do_logicalWorkflow_2", 
		"URL=https://10.125.2.179/bin-java/efsnPackage.do_logicalWorkflow?dump=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", 
		"Snapshot=t97.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("do_loadZKTemplate", 
		"URL=https://10.125.2.179/bin-java/zk/do_loadZKTemplate?dump=0.467239065758302&f=security.zul&zk.redrawCtrl=page&dump=0.8183569356638731", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", 
		"Snapshot=t98.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=../zkau/web/_zv3.9.0/js/zss.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", "ENDITEM", 
		"Url=../zkau/web/_zv2015042817/js/zul.mesh.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", "ENDITEM", 
		"Url=../zkau/web/_zv2015042817/js/zul.box.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", "ENDITEM", 
		"Url=../zkau/web/_zv2015042817/js/zul.sel.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", "ENDITEM", 
		"Url=../zkau/web/_zv2015042817/js/zul.tab.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", "ENDITEM", 
		"Url=../zkau/web/_zv2015042817/js/zul.inp.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", "ENDITEM", 
		"Url=../zkau/web/_zv2015042817/js/zul.utl.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", "ENDITEM", 
		"Url=../zkau/web/_zv2015042817/js/zhtml.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", "ENDITEM", 
		"Url=/javascript/zul.js?_=1480068015214", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", "ENDITEM", 
		"Url=../zkau/web/_zv2015042817/js/zul.wnd.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", "ENDITEM", 
		"Url=../zkau/web/_zv2015042817/js/zul.menu.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", "ENDITEM", 
		"Url=../zkau/web/_zv2015042817/js/zk.fmt.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", "ENDITEM", 
		"Url=../zkau/web/_zv2015042817/js/zul.layout.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", "ENDITEM", 
		"Url=../zkau/web/_zv2015042817/js/zkex.inp.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", "ENDITEM", 
		"Url=../zkau/web/b34f6723/zkstyle/zul/img/menu/zk-menu-sprite.png", "Referer=https://10.125.2.179/bin-java/zkau/web/b34f6723/_zkiju-zkstyle/zul/css/zk.wcs", "ENDITEM", 
		"Url=../zkau/web/b34f6723/zkstyle/zul/img/common/bar-bg.png", "Referer=https://10.125.2.179/bin-java/zkau/web/b34f6723/_zkiju-zkstyle/zul/css/zk.wcs", "ENDITEM", 
		"Url=/images/common/close_grey.gif", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", "ENDITEM", 
		"Url=/images/common/disabed_bg_stripe.png", "Referer=https://10.125.2.179/bin-java/zkau/web/b34f6723/_zkiju-zkstyle/zul/css/zk.wcs", "ENDITEM", 
		"Url=../zkau/web/b34f6723/zul/less/font/fontawesome-webfont.woff?v=4.0.1", "Referer=https://10.125.2.179/bin-java/zkau/web/b34f6723/_zkiju-zkstyle/zul/css/zk.wcs", "ENDITEM", 
		"LAST");

	lr_think_time(4);

	web_submit_data("zkau", 
		"Action=https://10.125.2.179/bin-java/zkau", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", 
		"Snapshot=t99.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=dtid", "Value=z_hxu", "ENDITEM", 
		"Name=cmd_0", "Value=onClick", "ENDITEM", 
		"Name=uuid_0", "Value=a04Qnf", "ENDITEM", 
		"Name=data_0", "Value={\"pageX\":75,\"pageY\":75,\"which\":1,\"x\":12,\"y\":11}", "ENDITEM", 
		"EXTRARES", 
		"Url=zkau/view/z_hxu/dwnmed-0/pul1/SecurityTemplateDownload_20161125-180026.xlsx", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", "ENDITEM", 
		"LAST");

	web_submit_data("zkau_2", 
		"Action=https://10.125.2.179/bin-java/zkau", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", 
		"Snapshot=t100.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=dtid", "Value=z_hxu", "ENDITEM", 
		"Name=cmd_0", "Value=onClick", "ENDITEM", 
		"Name=uuid_0", "Value=a04Qof", "ENDITEM", 
		"Name=data_0", "Value={\"pageX\":95,\"pageY\":68,\"which\":1,\"x\":7,\"y\":4}", "ENDITEM", 
		"EXTRARES", 
		"Url=zkau/view/z_hxu/dwnmed-1/7h01/SecurityAccessDownload_20161125-180032.xlsx", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", "ENDITEM", 
		"LAST");

	lr_think_time(11);

	lr_start_transaction("saveClose");

	web_submit_data("zkau_3", 
		"Action=https://10.125.2.179/bin-java/zkau", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", 
		"Snapshot=t101.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=dtid", "Value=z_hxu", "ENDITEM", 
		"Name=cmd_0", "Value=onClick", "ENDITEM", 
		"Name=uuid_0", "Value=a04Qmf", "ENDITEM", 
		"Name=data_0", "Value={\"pageX\":45,\"pageY\":66,\"which\":1,\"x\":5,\"y\":2}", "ENDITEM", 
		"LAST");

	web_submit_data("zkau_4", 
		"Action=https://10.125.2.179/bin-java/zkau", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", 
		"Snapshot=t102.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=dtid", "Value=z_hxu", "ENDITEM", 
		"Name=cmd_0", "Value=echo", "ENDITEM", 
		"Name=opt_0", "Value=i", "ENDITEM", 
		"Name=uuid_0", "Value=a04Q0", "ENDITEM", 
		"Name=data_0", "Value={\"\":[\"onSave\",0]}", "ENDITEM", 
		"Name=cmd_1", "Value=echo", "ENDITEM", 
		"Name=opt_1", "Value=i", "ENDITEM", 
		"Name=uuid_1", "Value=a04Q0", "ENDITEM", 
		"Name=data_1", "Value={\"\":[\"onSave\",1]}", "ENDITEM", 
		"EXTRARES", 
		"Url=zkau?dtid=z_hxu&cmd_0=rmDesktop&opt_0=i", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", "ENDITEM", 
		"LAST");

	web_url("efsnPackage.do_userGoHome", 
		"URL=https://10.125.2.179/bin-java/efsnPackage.do_userGoHome", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", 
		"Snapshot=t103.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("efsnPackage.do_logicalWorkflow_3", 
		"URL=https://10.125.2.179/bin-java/efsnPackage.do_logicalWorkflow?dump=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://10.125.2.179/bin-java/efsnPackage.do_userGoHome", 
		"Snapshot=t104.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("saveClose",2);

	return 0;
}
# 8 "c:\\tmp\\ck\\\\combined_CK.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	lr_think_time(3);
	
	web_url("efsnPackage.do_userLogoff", 
		"URL=https://<url}/bin-java/efsnPackage.do_userLogoff", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t86.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=http://<url}/favicon.ico", "Referer=", "ENDITEM", 
		"LAST");

	return 0;
}
# 9 "c:\\tmp\\ck\\\\combined_CK.c" 2

