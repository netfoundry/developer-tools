=begin comment

untitled API

No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: 5229

Generated by: https://openapi-generator.tech

=end comment

=cut

#
# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# Do not edit the class manually.
# Ref: https://openapi-generator.tech
#
package WWW::OpenAPIClient::Object::InlineResponse200197316;

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

The version of the OpenAPI document: 5229

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
                                  class => 'InlineResponse200197316',
                                  required => [], # TODO
}                                 );

__PACKAGE__->method_documentation({
    'ziti_cli_linux_binary/sha_1' => {
        datatype => 'string',
        base_name => 'zitiCliLinuxBinary.sha-1',
        description => '',
        format => '',
        read_only => '',
            },
    'ziti_tunnel_linux_binary' => {
        datatype => 'string',
        base_name => 'zitiTunnelLinuxBinary',
        description => '',
        format => '',
        read_only => '',
            },
    'ziti_tunnel_linux_binary/sha_1' => {
        datatype => 'string',
        base_name => 'zitiTunnelLinuxBinary.sha-1',
        description => '',
        format => '',
        read_only => '',
            },
    'ziti_controller_binary' => {
        datatype => 'string',
        base_name => 'zitiControllerBinary',
        description => '',
        format => '',
        read_only => '',
            },
    'ziti_cli_linux_binary/md5' => {
        datatype => 'string',
        base_name => 'zitiCliLinuxBinary.md5',
        description => '',
        format => '',
        read_only => '',
            },
    'ziti_router_linux_binary/sha_1' => {
        datatype => 'string',
        base_name => 'zitiRouterLinuxBinary.sha-1',
        description => '',
        format => '',
        read_only => '',
            },
    'ziti_router_linux_arm_binary/md5' => {
        datatype => 'string',
        base_name => 'zitiRouterLinuxArmBinary.md5',
        description => '',
        format => '',
        read_only => '',
            },
    'ziti_router_linux_binary/sha_256' => {
        datatype => 'string',
        base_name => 'zitiRouterLinuxBinary.sha-256',
        description => '',
        format => '',
        read_only => '',
            },
    'ziti_cli_linux_arm_binary' => {
        datatype => 'string',
        base_name => 'zitiCliLinuxArmBinary',
        description => '',
        format => '',
        read_only => '',
            },
    'ziti_router_linux_binary/md5' => {
        datatype => 'string',
        base_name => 'zitiRouterLinuxBinary.md5',
        description => '',
        format => '',
        read_only => '',
            },
    'ziti_windows_desktop_edge' => {
        datatype => 'string',
        base_name => 'zitiWindowsDesktopEdge',
        description => '',
        format => '',
        read_only => '',
            },
    'ziti_router_linux_arm_binary/sha_256' => {
        datatype => 'string',
        base_name => 'zitiRouterLinuxArmBinary.sha-256',
        description => '',
        format => '',
        read_only => '',
            },
    'ziti_mac_desktop_edge' => {
        datatype => 'string',
        base_name => 'zitiMacDesktopEdge',
        description => '',
        format => '',
        read_only => '',
            },
    'ziti_controller_binary/sha_1' => {
        datatype => 'string',
        base_name => 'zitiControllerBinary.sha-1',
        description => '',
        format => '',
        read_only => '',
            },
    'ziti_controller_binary/md5' => {
        datatype => 'string',
        base_name => 'zitiControllerBinary.md5',
        description => '',
        format => '',
        read_only => '',
            },
    'ziti_controller_binary/sha_256' => {
        datatype => 'string',
        base_name => 'zitiControllerBinary.sha-256',
        description => '',
        format => '',
        read_only => '',
            },
    'ziti_ios_edge' => {
        datatype => 'string',
        base_name => 'zitiIosEdge',
        description => '',
        format => '',
        read_only => '',
            },
    'ziti_cli_linux_binary' => {
        datatype => 'string',
        base_name => 'zitiCliLinuxBinary',
        description => '',
        format => '',
        read_only => '',
            },
    'ziti_router_linux_arm_binary/sha_1' => {
        datatype => 'string',
        base_name => 'zitiRouterLinuxArmBinary.sha-1',
        description => '',
        format => '',
        read_only => '',
            },
    'ziti_version' => {
        datatype => 'string',
        base_name => 'zitiVersion',
        description => '',
        format => '',
        read_only => '',
            },
    'ziti_fabric_binary' => {
        datatype => 'string',
        base_name => 'zitiFabricBinary',
        description => '',
        format => '',
        read_only => '',
            },
    'ziti_cli_linux_arm_binary/sha_1' => {
        datatype => 'string',
        base_name => 'zitiCliLinuxArmBinary.sha-1',
        description => '',
        format => '',
        read_only => '',
            },
    'ziti_tunnel_linux_arm_binary/sha_1' => {
        datatype => 'string',
        base_name => 'zitiTunnelLinuxArmBinary.sha-1',
        description => '',
        format => '',
        read_only => '',
            },
    'ziti_tunnel_linux_arm_binary' => {
        datatype => 'string',
        base_name => 'zitiTunnelLinuxArmBinary',
        description => '',
        format => '',
        read_only => '',
            },
    'ziti_cli_linux_arm_binary/sha_256' => {
        datatype => 'string',
        base_name => 'zitiCliLinuxArmBinary.sha-256',
        description => '',
        format => '',
        read_only => '',
            },
    'ziti_fabric_binary/sha_256' => {
        datatype => 'string',
        base_name => 'zitiFabricBinary.sha-256',
        description => '',
        format => '',
        read_only => '',
            },
    'ziti_router_linux_binary' => {
        datatype => 'string',
        base_name => 'zitiRouterLinuxBinary',
        description => '',
        format => '',
        read_only => '',
            },
    'ziti_tunnel_linux_binary/sha_256' => {
        datatype => 'string',
        base_name => 'zitiTunnelLinuxBinary.sha-256',
        description => '',
        format => '',
        read_only => '',
            },
    'ziti_android_edge' => {
        datatype => 'string',
        base_name => 'zitiAndroidEdge',
        description => '',
        format => '',
        read_only => '',
            },
    'ziti_tunnel_linux_arm_binary/md5' => {
        datatype => 'string',
        base_name => 'zitiTunnelLinuxArmBinary.md5',
        description => '',
        format => '',
        read_only => '',
            },
    'ziti_fabric_binary/md5' => {
        datatype => 'string',
        base_name => 'zitiFabricBinary.md5',
        description => '',
        format => '',
        read_only => '',
            },
    'ziti_tunnel_linux_binary/md5' => {
        datatype => 'string',
        base_name => 'zitiTunnelLinuxBinary.md5',
        description => '',
        format => '',
        read_only => '',
            },
    'ziti_router_linux_arm_binary' => {
        datatype => 'string',
        base_name => 'zitiRouterLinuxArmBinary',
        description => '',
        format => '',
        read_only => '',
            },
    'ziti_fabric_binary/sha_1' => {
        datatype => 'string',
        base_name => 'zitiFabricBinary.sha-1',
        description => '',
        format => '',
        read_only => '',
            },
    'ziti_cli_linux_arm_binary/md5' => {
        datatype => 'string',
        base_name => 'zitiCliLinuxArmBinary.md5',
        description => '',
        format => '',
        read_only => '',
            },
    'ziti_tunnel_linux_arm_binary/sha_256' => {
        datatype => 'string',
        base_name => 'zitiTunnelLinuxArmBinary.sha-256',
        description => '',
        format => '',
        read_only => '',
            },
    'ziti_cli_linux_binary/sha_256' => {
        datatype => 'string',
        base_name => 'zitiCliLinuxBinary.sha-256',
        description => '',
        format => '',
        read_only => '',
            },
    'active' => {
        datatype => 'boolean',
        base_name => 'active',
        description => '',
        format => '',
        read_only => '',
            },
});

__PACKAGE__->openapi_types( {
    'ziti_cli_linux_binary/sha_1' => 'string',
    'ziti_tunnel_linux_binary' => 'string',
    'ziti_tunnel_linux_binary/sha_1' => 'string',
    'ziti_controller_binary' => 'string',
    'ziti_cli_linux_binary/md5' => 'string',
    'ziti_router_linux_binary/sha_1' => 'string',
    'ziti_router_linux_arm_binary/md5' => 'string',
    'ziti_router_linux_binary/sha_256' => 'string',
    'ziti_cli_linux_arm_binary' => 'string',
    'ziti_router_linux_binary/md5' => 'string',
    'ziti_windows_desktop_edge' => 'string',
    'ziti_router_linux_arm_binary/sha_256' => 'string',
    'ziti_mac_desktop_edge' => 'string',
    'ziti_controller_binary/sha_1' => 'string',
    'ziti_controller_binary/md5' => 'string',
    'ziti_controller_binary/sha_256' => 'string',
    'ziti_ios_edge' => 'string',
    'ziti_cli_linux_binary' => 'string',
    'ziti_router_linux_arm_binary/sha_1' => 'string',
    'ziti_version' => 'string',
    'ziti_fabric_binary' => 'string',
    'ziti_cli_linux_arm_binary/sha_1' => 'string',
    'ziti_tunnel_linux_arm_binary/sha_1' => 'string',
    'ziti_tunnel_linux_arm_binary' => 'string',
    'ziti_cli_linux_arm_binary/sha_256' => 'string',
    'ziti_fabric_binary/sha_256' => 'string',
    'ziti_router_linux_binary' => 'string',
    'ziti_tunnel_linux_binary/sha_256' => 'string',
    'ziti_android_edge' => 'string',
    'ziti_tunnel_linux_arm_binary/md5' => 'string',
    'ziti_fabric_binary/md5' => 'string',
    'ziti_tunnel_linux_binary/md5' => 'string',
    'ziti_router_linux_arm_binary' => 'string',
    'ziti_fabric_binary/sha_1' => 'string',
    'ziti_cli_linux_arm_binary/md5' => 'string',
    'ziti_tunnel_linux_arm_binary/sha_256' => 'string',
    'ziti_cli_linux_binary/sha_256' => 'string',
    'active' => 'boolean'
} );

__PACKAGE__->attribute_map( {
    'ziti_cli_linux_binary/sha_1' => 'zitiCliLinuxBinary.sha-1',
    'ziti_tunnel_linux_binary' => 'zitiTunnelLinuxBinary',
    'ziti_tunnel_linux_binary/sha_1' => 'zitiTunnelLinuxBinary.sha-1',
    'ziti_controller_binary' => 'zitiControllerBinary',
    'ziti_cli_linux_binary/md5' => 'zitiCliLinuxBinary.md5',
    'ziti_router_linux_binary/sha_1' => 'zitiRouterLinuxBinary.sha-1',
    'ziti_router_linux_arm_binary/md5' => 'zitiRouterLinuxArmBinary.md5',
    'ziti_router_linux_binary/sha_256' => 'zitiRouterLinuxBinary.sha-256',
    'ziti_cli_linux_arm_binary' => 'zitiCliLinuxArmBinary',
    'ziti_router_linux_binary/md5' => 'zitiRouterLinuxBinary.md5',
    'ziti_windows_desktop_edge' => 'zitiWindowsDesktopEdge',
    'ziti_router_linux_arm_binary/sha_256' => 'zitiRouterLinuxArmBinary.sha-256',
    'ziti_mac_desktop_edge' => 'zitiMacDesktopEdge',
    'ziti_controller_binary/sha_1' => 'zitiControllerBinary.sha-1',
    'ziti_controller_binary/md5' => 'zitiControllerBinary.md5',
    'ziti_controller_binary/sha_256' => 'zitiControllerBinary.sha-256',
    'ziti_ios_edge' => 'zitiIosEdge',
    'ziti_cli_linux_binary' => 'zitiCliLinuxBinary',
    'ziti_router_linux_arm_binary/sha_1' => 'zitiRouterLinuxArmBinary.sha-1',
    'ziti_version' => 'zitiVersion',
    'ziti_fabric_binary' => 'zitiFabricBinary',
    'ziti_cli_linux_arm_binary/sha_1' => 'zitiCliLinuxArmBinary.sha-1',
    'ziti_tunnel_linux_arm_binary/sha_1' => 'zitiTunnelLinuxArmBinary.sha-1',
    'ziti_tunnel_linux_arm_binary' => 'zitiTunnelLinuxArmBinary',
    'ziti_cli_linux_arm_binary/sha_256' => 'zitiCliLinuxArmBinary.sha-256',
    'ziti_fabric_binary/sha_256' => 'zitiFabricBinary.sha-256',
    'ziti_router_linux_binary' => 'zitiRouterLinuxBinary',
    'ziti_tunnel_linux_binary/sha_256' => 'zitiTunnelLinuxBinary.sha-256',
    'ziti_android_edge' => 'zitiAndroidEdge',
    'ziti_tunnel_linux_arm_binary/md5' => 'zitiTunnelLinuxArmBinary.md5',
    'ziti_fabric_binary/md5' => 'zitiFabricBinary.md5',
    'ziti_tunnel_linux_binary/md5' => 'zitiTunnelLinuxBinary.md5',
    'ziti_router_linux_arm_binary' => 'zitiRouterLinuxArmBinary',
    'ziti_fabric_binary/sha_1' => 'zitiFabricBinary.sha-1',
    'ziti_cli_linux_arm_binary/md5' => 'zitiCliLinuxArmBinary.md5',
    'ziti_tunnel_linux_arm_binary/sha_256' => 'zitiTunnelLinuxArmBinary.sha-256',
    'ziti_cli_linux_binary/sha_256' => 'zitiCliLinuxBinary.sha-256',
    'active' => 'active'
} );

__PACKAGE__->mk_accessors(keys %{__PACKAGE__->attribute_map});


1;
