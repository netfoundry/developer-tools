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
package WWW::OpenAPIClient::Object::InlineResponse202Links;

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

use WWW::OpenAPIClient::Object::InlineResponse200LinksNetwork;
use WWW::OpenAPIClient::Object::InlineResponse200LinksSelf;

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
                                  class => 'InlineResponse202Links',
                                  required => [], # TODO
}                                 );

__PACKAGE__->method_documentation({
    'services' => {
        datatype => 'InlineResponse200LinksSelf',
        base_name => 'services',
        description => '',
        format => '',
        read_only => '',
            },
    'networks' => {
        datatype => 'InlineResponse200LinksNetwork',
        base_name => 'networks',
        description => '',
        format => '',
        read_only => '',
            },
    'app_wans' => {
        datatype => 'InlineResponse200LinksSelf',
        base_name => 'app-wans',
        description => '',
        format => '',
        read_only => '',
            },
    'process' => {
        datatype => 'InlineResponse200LinksNetwork',
        base_name => 'process',
        description => '',
        format => '',
        read_only => '',
            },
    'endpoints' => {
        datatype => 'InlineResponse200LinksSelf',
        base_name => 'endpoints',
        description => '',
        format => '',
        read_only => '',
            },
    'certificate_authorities' => {
        datatype => 'InlineResponse200LinksSelf',
        base_name => 'certificate-authorities',
        description => '',
        format => '',
        read_only => '',
            },
    'self' => {
        datatype => 'InlineResponse200LinksSelf',
        base_name => 'self',
        description => '',
        format => '',
        read_only => '',
            },
    'process_executions' => {
        datatype => 'InlineResponse200LinksNetwork',
        base_name => 'process-executions',
        description => '',
        format => '',
        read_only => '',
            },
    'network_controllers' => {
        datatype => 'InlineResponse200LinksSelf',
        base_name => 'network-controllers',
        description => '',
        format => '',
        read_only => '',
            },
    'posture_checks' => {
        datatype => 'InlineResponse200LinksSelf',
        base_name => 'posture-checks',
        description => '',
        format => '',
        read_only => '',
            },
    'edge_routers' => {
        datatype => 'InlineResponse200LinksSelf',
        base_name => 'edge-routers',
        description => '',
        format => '',
        read_only => '',
            },
    'edge_router_policies' => {
        datatype => 'InlineResponse200LinksSelf',
        base_name => 'edge-router-policies',
        description => '',
        format => '',
        read_only => '',
            },
});

__PACKAGE__->openapi_types( {
    'services' => 'InlineResponse200LinksSelf',
    'networks' => 'InlineResponse200LinksNetwork',
    'app_wans' => 'InlineResponse200LinksSelf',
    'process' => 'InlineResponse200LinksNetwork',
    'endpoints' => 'InlineResponse200LinksSelf',
    'certificate_authorities' => 'InlineResponse200LinksSelf',
    'self' => 'InlineResponse200LinksSelf',
    'process_executions' => 'InlineResponse200LinksNetwork',
    'network_controllers' => 'InlineResponse200LinksSelf',
    'posture_checks' => 'InlineResponse200LinksSelf',
    'edge_routers' => 'InlineResponse200LinksSelf',
    'edge_router_policies' => 'InlineResponse200LinksSelf'
} );

__PACKAGE__->attribute_map( {
    'services' => 'services',
    'networks' => 'networks',
    'app_wans' => 'app-wans',
    'process' => 'process',
    'endpoints' => 'endpoints',
    'certificate_authorities' => 'certificate-authorities',
    'self' => 'self',
    'process_executions' => 'process-executions',
    'network_controllers' => 'network-controllers',
    'posture_checks' => 'posture-checks',
    'edge_routers' => 'edge-routers',
    'edge_router_policies' => 'edge-router-policies'
} );

__PACKAGE__->mk_accessors(keys %{__PACKAGE__->attribute_map});


1;
