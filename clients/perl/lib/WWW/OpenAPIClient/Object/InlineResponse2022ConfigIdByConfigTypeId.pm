=begin comment

untitled API

No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: 5170

Generated by: https://openapi-generator.tech

=end comment

=cut

#
# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# Do not edit the class manually.
# Ref: https://openapi-generator.tech
#
package WWW::OpenAPIClient::Object::InlineResponse2022ConfigIdByConfigTypeId;

require 5.6.0;
use strict;
use warnings;
use utf8;
use JSON qw(decode_json);
use Data::Dumper;
use Module::Runtime qw(use_module);
use Log::Any qw($log);
use Date::Parse;
use DateTime;


use base ("Class::Accessor", "Class::Data::Inheritable");

#
#
#
# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech). Do not edit the class manually.
# REF: https://openapi-generator.tech
#

=begin comment

untitled API

No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: 5170

Generated by: https://openapi-generator.tech

=end comment

=cut

#
# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# Do not edit the class manually.
# Ref: https://openapi-generator.tech
#
__PACKAGE__->mk_classdata('attribute_map' => {});
__PACKAGE__->mk_classdata('openapi_types' => {});
__PACKAGE__->mk_classdata('method_documentation' => {}); 
__PACKAGE__->mk_classdata('class_documentation' => {});

# new plain object
sub new { 
    my ($class, %args) = @_; 

    my $self = bless {}, $class;

    $self->init(%args);
    
    return $self;
}

# initialize the object
sub init
{
    my ($self, %args) = @_;

    foreach my $attribute (keys %{$self->attribute_map}) {
        my $args_key = $self->attribute_map->{$attribute};
        $self->$attribute( $args{ $args_key } );
    }
}

# return perl hash
sub to_hash {
    my $self = shift;
    my $_hash = decode_json(JSON->new->convert_blessed->encode($self));

    return $_hash;
}

# used by JSON for serialization
sub TO_JSON { 
    my $self = shift;
    my $_data = {};
    foreach my $_key (keys %{$self->attribute_map}) {
        if (defined $self->{$_key}) {
            $_data->{$self->attribute_map->{$_key}} = $self->{$_key};
        }
    }

    return $_data;
}

# from Perl hashref
sub from_hash {
    my ($self, $hash) = @_;

    # loop through attributes and use openapi_types to deserialize the data
    while ( my ($_key, $_type) = each %{$self->openapi_types} ) {
        my $_json_attribute = $self->attribute_map->{$_key}; 
        if ($_type =~ /^array\[(.+)\]$/i) { # array
            my $_subclass = $1;
            my @_array = ();
            foreach my $_element (@{$hash->{$_json_attribute}}) {
                push @_array, $self->_deserialize($_subclass, $_element);
            }
            $self->{$_key} = \@_array;
        } elsif ($_type =~ /^hash\[string,(.+)\]$/i) { # hash
            my $_subclass = $1;
            my %_hash = ();
            while (my($_key, $_element) = each %{$hash->{$_json_attribute}}) {
                $_hash{$_key} = $self->_deserialize($_subclass, $_element);
            }
            $self->{$_key} = \%_hash;
        } elsif (exists $hash->{$_json_attribute}) { #hash(model), primitive, datetime
            $self->{$_key} = $self->_deserialize($_type, $hash->{$_json_attribute});
        } else {
            $log->debugf("Warning: %s (%s) does not exist in input hash\n", $_key, $_json_attribute);
        }
    }
  
    return $self;
}

# deserialize non-array data
sub _deserialize {
    my ($self, $type, $data) = @_;
    $log->debugf("deserializing %s with %s",Dumper($data), $type);

    if ($type eq 'DateTime') {
        return DateTime->from_epoch(epoch => str2time($data));
    } elsif ( grep( /^$type$/, ('int', 'double', 'string', 'boolean'))) {
        return $data;
    } else { # hash(model)
        my $_instance = eval "WWW::OpenAPIClient::Object::$type->new()";
        return $_instance->from_hash($data);
    }
}



__PACKAGE__->class_documentation({description => '',
                                  class => 'InlineResponse2022ConfigIdByConfigTypeId',
                                  required => [], # TODO
}                                 );

__PACKAGE__->method_documentation({
    'aca7f705_9f00_4ff6_8b86_63a4d44bde8a' => {
        datatype => 'string',
        base_name => 'aca7f705-9f00-4ff6-8b86-63a4d44bde8a',
        description => '',
        format => '',
        read_only => '',
            },
    '_6cd51ae0_cfe4_499d_88d8_d02a9e18b25f' => {
        datatype => 'string',
        base_name => '6cd51ae0-cfe4-499d-88d8-d02a9e18b25f',
        description => '',
        format => '',
        read_only => '',
            },
    'd28725c0_9771_47d7_a9da_e408bd0adf4e' => {
        datatype => 'string',
        base_name => 'd28725c0-9771-47d7-a9da-e408bd0adf4e',
        description => '',
        format => '',
        read_only => '',
            },
    '_888d6565_4359_4d91_b38d_0a24124e4456' => {
        datatype => 'string',
        base_name => '888d6565-4359-4d91-b38d-0a24124e4456',
        description => '',
        format => '',
        read_only => '',
            },
    'feb075cd_dd2b_47c5_922c_86ef3b06fb16' => {
        datatype => 'string',
        base_name => 'feb075cd-dd2b-47c5-922c-86ef3b06fb16',
        description => '',
        format => '',
        read_only => '',
            },
});

__PACKAGE__->openapi_types( {
    'aca7f705_9f00_4ff6_8b86_63a4d44bde8a' => 'string',
    '_6cd51ae0_cfe4_499d_88d8_d02a9e18b25f' => 'string',
    'd28725c0_9771_47d7_a9da_e408bd0adf4e' => 'string',
    '_888d6565_4359_4d91_b38d_0a24124e4456' => 'string',
    'feb075cd_dd2b_47c5_922c_86ef3b06fb16' => 'string'
} );

__PACKAGE__->attribute_map( {
    'aca7f705_9f00_4ff6_8b86_63a4d44bde8a' => 'aca7f705-9f00-4ff6-8b86-63a4d44bde8a',
    '_6cd51ae0_cfe4_499d_88d8_d02a9e18b25f' => '6cd51ae0-cfe4-499d-88d8-d02a9e18b25f',
    'd28725c0_9771_47d7_a9da_e408bd0adf4e' => 'd28725c0-9771-47d7-a9da-e408bd0adf4e',
    '_888d6565_4359_4d91_b38d_0a24124e4456' => '888d6565-4359-4d91-b38d-0a24124e4456',
    'feb075cd_dd2b_47c5_922c_86ef3b06fb16' => 'feb075cd-dd2b-47c5-922c-86ef3b06fb16'
} );

__PACKAGE__->mk_accessors(keys %{__PACKAGE__->attribute_map});


1;
