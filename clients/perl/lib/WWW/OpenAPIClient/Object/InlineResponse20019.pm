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
package WWW::OpenAPIClient::Object::InlineResponse20019;

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

use WWW::OpenAPIClient::Object::InlineResponse20019710;
use WWW::OpenAPIClient::Object::InlineResponse200197316;
use WWW::OpenAPIClient::Object::InlineResponse20019734;

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
                                  class => 'InlineResponse20019',
                                  required => [], # TODO
}                                 );

__PACKAGE__->method_documentation({
    '_7/3/4' => {
        datatype => 'InlineResponse20019734',
        base_name => '7.3.4',
        description => '',
        format => '',
        read_only => '',
            },
    '_7/3/11' => {
        datatype => 'InlineResponse20019734',
        base_name => '7.3.11',
        description => '',
        format => '',
        read_only => '',
            },
    '_7/3/16' => {
        datatype => 'InlineResponse200197316',
        base_name => '7.3.16',
        description => '',
        format => '',
        read_only => '',
            },
    '_7/1/0' => {
        datatype => 'InlineResponse20019710',
        base_name => '7.1.0',
        description => '',
        format => '',
        read_only => '',
            },
    '_7/3/22' => {
        datatype => 'InlineResponse200197316',
        base_name => '7.3.22',
        description => '',
        format => '',
        read_only => '',
            },
    '_7/3/23' => {
        datatype => 'InlineResponse200197316',
        base_name => '7.3.23',
        description => '',
        format => '',
        read_only => '',
            },
    '_7/3/8' => {
        datatype => 'InlineResponse20019734',
        base_name => '7.3.8',
        description => '',
        format => '',
        read_only => '',
            },
    '_7/3/12' => {
        datatype => 'InlineResponse20019734',
        base_name => '7.3.12',
        description => '',
        format => '',
        read_only => '',
            },
    '_7/2/1' => {
        datatype => 'InlineResponse20019710',
        base_name => '7.2.1',
        description => '',
        format => '',
        read_only => '',
            },
    '_7/3/13' => {
        datatype => 'InlineResponse20019734',
        base_name => '7.3.13',
        description => '',
        format => '',
        read_only => '',
            },
    '_7/0/0' => {
        datatype => 'InlineResponse20019710',
        base_name => '7.0.0',
        description => '',
        format => '',
        read_only => '',
            },
    '_7/3/17' => {
        datatype => 'InlineResponse200197316',
        base_name => '7.3.17',
        description => '',
        format => '',
        read_only => '',
            },
    '_7/3/5' => {
        datatype => 'InlineResponse20019734',
        base_name => '7.3.5',
        description => '',
        format => '',
        read_only => '',
            },
    '_7/3/20' => {
        datatype => 'InlineResponse200197316',
        base_name => '7.3.20',
        description => '',
        format => '',
        read_only => '',
            },
    '_7/3/2' => {
        datatype => 'InlineResponse20019710',
        base_name => '7.3.2',
        description => '',
        format => '',
        read_only => '',
            },
    '_7/3/9' => {
        datatype => 'InlineResponse20019734',
        base_name => '7.3.9',
        description => '',
        format => '',
        read_only => '',
            },
    '_7/3/24' => {
        datatype => 'InlineResponse200197316',
        base_name => '7.3.24',
        description => '',
        format => '',
        read_only => '',
            },
    '_7/2/0' => {
        datatype => 'InlineResponse20019710',
        base_name => '7.2.0',
        description => '',
        format => '',
        read_only => '',
            },
    '_7/3/0' => {
        datatype => 'InlineResponse20019710',
        base_name => '7.3.0',
        description => '',
        format => '',
        read_only => '',
            },
    '_7/3/14' => {
        datatype => 'InlineResponse200197316',
        base_name => '7.3.14',
        description => '',
        format => '',
        read_only => '',
            },
    '_7/3/6' => {
        datatype => 'InlineResponse20019734',
        base_name => '7.3.6',
        description => '',
        format => '',
        read_only => '',
            },
    '_7/3/1' => {
        datatype => 'InlineResponse20019710',
        base_name => '7.3.1',
        description => '',
        format => '',
        read_only => '',
            },
    '_7/3/19' => {
        datatype => 'InlineResponse200197316',
        base_name => '7.3.19',
        description => '',
        format => '',
        read_only => '',
            },
    '_7/3/15' => {
        datatype => 'InlineResponse200197316',
        base_name => '7.3.15',
        description => '',
        format => '',
        read_only => '',
            },
    '_7/3/10' => {
        datatype => 'InlineResponse20019734',
        base_name => '7.3.10',
        description => '',
        format => '',
        read_only => '',
            },
    '_7/3/7' => {
        datatype => 'InlineResponse20019734',
        base_name => '7.3.7',
        description => '',
        format => '',
        read_only => '',
            },
    '_7/3/21' => {
        datatype => 'InlineResponse200197316',
        base_name => '7.3.21',
        description => '',
        format => '',
        read_only => '',
            },
    '_7/3/3' => {
        datatype => 'InlineResponse20019710',
        base_name => '7.3.3',
        description => '',
        format => '',
        read_only => '',
            },
    '_7/3/18' => {
        datatype => 'InlineResponse200197316',
        base_name => '7.3.18',
        description => '',
        format => '',
        read_only => '',
            },
});

__PACKAGE__->openapi_types( {
    '_7/3/4' => 'InlineResponse20019734',
    '_7/3/11' => 'InlineResponse20019734',
    '_7/3/16' => 'InlineResponse200197316',
    '_7/1/0' => 'InlineResponse20019710',
    '_7/3/22' => 'InlineResponse200197316',
    '_7/3/23' => 'InlineResponse200197316',
    '_7/3/8' => 'InlineResponse20019734',
    '_7/3/12' => 'InlineResponse20019734',
    '_7/2/1' => 'InlineResponse20019710',
    '_7/3/13' => 'InlineResponse20019734',
    '_7/0/0' => 'InlineResponse20019710',
    '_7/3/17' => 'InlineResponse200197316',
    '_7/3/5' => 'InlineResponse20019734',
    '_7/3/20' => 'InlineResponse200197316',
    '_7/3/2' => 'InlineResponse20019710',
    '_7/3/9' => 'InlineResponse20019734',
    '_7/3/24' => 'InlineResponse200197316',
    '_7/2/0' => 'InlineResponse20019710',
    '_7/3/0' => 'InlineResponse20019710',
    '_7/3/14' => 'InlineResponse200197316',
    '_7/3/6' => 'InlineResponse20019734',
    '_7/3/1' => 'InlineResponse20019710',
    '_7/3/19' => 'InlineResponse200197316',
    '_7/3/15' => 'InlineResponse200197316',
    '_7/3/10' => 'InlineResponse20019734',
    '_7/3/7' => 'InlineResponse20019734',
    '_7/3/21' => 'InlineResponse200197316',
    '_7/3/3' => 'InlineResponse20019710',
    '_7/3/18' => 'InlineResponse200197316'
} );

__PACKAGE__->attribute_map( {
    '_7/3/4' => '7.3.4',
    '_7/3/11' => '7.3.11',
    '_7/3/16' => '7.3.16',
    '_7/1/0' => '7.1.0',
    '_7/3/22' => '7.3.22',
    '_7/3/23' => '7.3.23',
    '_7/3/8' => '7.3.8',
    '_7/3/12' => '7.3.12',
    '_7/2/1' => '7.2.1',
    '_7/3/13' => '7.3.13',
    '_7/0/0' => '7.0.0',
    '_7/3/17' => '7.3.17',
    '_7/3/5' => '7.3.5',
    '_7/3/20' => '7.3.20',
    '_7/3/2' => '7.3.2',
    '_7/3/9' => '7.3.9',
    '_7/3/24' => '7.3.24',
    '_7/2/0' => '7.2.0',
    '_7/3/0' => '7.3.0',
    '_7/3/14' => '7.3.14',
    '_7/3/6' => '7.3.6',
    '_7/3/1' => '7.3.1',
    '_7/3/19' => '7.3.19',
    '_7/3/15' => '7.3.15',
    '_7/3/10' => '7.3.10',
    '_7/3/7' => '7.3.7',
    '_7/3/21' => '7.3.21',
    '_7/3/3' => '7.3.3',
    '_7/3/18' => '7.3.18'
} );

__PACKAGE__->mk_accessors(keys %{__PACKAGE__->attribute_map});


1;
