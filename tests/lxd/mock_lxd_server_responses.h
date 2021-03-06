/*
 * Copyright (C) 2020 Canonical, Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef MULTIPASS_MOCK_LXD_SERVER_RESPONSES_H
#define MULTIPASS_MOCK_LXD_SERVER_RESPONSES_H

#include <QByteArray>

namespace multipass
{
namespace test
{
const QByteArray not_found_data{"{\"error\": \"not found\",\"error_code\": 404,\"type\": \"error\"}"};

const QByteArray post_no_error_data{"{"
                                    "\"error\": \"\","
                                    "\"error_code\": 0,"
                                    "\"metadata\": null,"
                                    "\"operation\": \"\","
                                    "\"status\": \"Success\","
                                    "\"status_code\": 200,"
                                    "\"type\": \"sync\""
                                    "}\n"};

const QByteArray project_info_data{"{"
                                   "\"error\": \"\","
                                   "\"error_code\": 0,"
                                   "\"metadata\": {"
                                   "    \"config\": {"
                                   "        \"features.images\": \"true\","
                                   "        \"features.profiles\": \"true\","
                                   "        \"features.storage.volumes\": \"true\""
                                   "    },"
                                   "    \"description\": \"Project for Multipass instances\","
                                   "    \"name\": \"multipass\","
                                   "    \"used_by\": ["
                                   "        \"/1.0/profiles/default?project=multipass\""
                                   "    ]"
                                   "},"
                                   "\"operation\": \"\","
                                   "\"status\": \"Success\","
                                   "\"status_code\": 200,"
                                   "\"type\": \"sync\""
                                   "}\n"};

const QByteArray network_info_data{"{"
                                   "\"error\": \"\","
                                   "\"error_code\": 0,"
                                   "\"metadata\": {"
                                   "    \"config\": {"
                                   "        \"ipv4.address\": \"10.241.212.1/24\","
                                   "        \"ipv4.nat\": \"true\","
                                   "        \"ipv6.address\": \"fd42:cc44:a223:7956::1/64\","
                                   "        \"ipv6.nat\": \"true\""
                                   "    },"
                                   "    \"description\": \"Network bridge for Multipass\","
                                   "    \"locations\": ["
                                   "        \"none\""
                                   "    ],"
                                   "    \"managed\": true,"
                                   "    \"name\": \"mpbr0\","
                                   "    \"status\": \"Created\","
                                   "    \"type\": \"bridge\","
                                   "    \"used_by\": ["
                                   "    ]"
                                   "},"
                                   "\"operation\": \"\","
                                   "\"status\": \"Success\","
                                   "\"status_code\": 200,"
                                   "\"type\": \"sync\""
                                   "}\n"};

const QByteArray create_vm_data{"{"
                                "\"error\": \"\","
                                "\"error_code\": 0,"
                                "\"metadata\": {"
                                "    \"class\": \"task\","
                                "    \"created_at\": \"2020-05-18T15:14:21.104580212-04:00\","
                                "    \"description\": \"Creating container\","
                                "    \"err\": \"\","
                                "    \"id\": \"0020444c-2e4c-49d5-83ed-3275e3f6d005\","
                                "    \"location\": \"none\","
                                "    \"may_cancel\": false,"
                                "    \"metadata\": null,"
                                "    \"resources\": {"
                                "        \"containers\": ["
                                "            \"/1.0/containers/pied-piper-valley\""
                                "         ],"
                                "        \"instances\": ["
                                "            \"/1.0/instances/pied-piper-valley\""
                                "         ]"
                                "     },"
                                "    \"status\": \"Running\","
                                "    \"status_code\": 103,"
                                "    \"updated_at\": \"2020-05-18T15:14:21.104580212-04:00\""
                                " },"
                                "\"operation\": \"/1.0/operations/0020444c-2e4c-49d5-83ed-3275e3f6d005\","
                                "\"status\": \"Operation created\","
                                "\"status_code\": 100,"
                                "\"type\": \"async\""
                                "}\n"};

const QByteArray create_vm_finished_data{
    "{"
    "\"error\": \"\","
    "\"error_code\": 0,"
    "\"metadata\": {"
    "    \"class\": \"task\","
    "    \"created_at\": \"2020-05-18T15:14:21.104580212-04:00\","
    "    \"description\": \"Creating container\","
    "    \"err\": \"\","
    "    \"id\": \"0020444c-2e4c-49d5-83ed-3275e3f6d005\","
    "    \"location\": \"none\","
    "    \"may_cancel\": false,"
    "    \"metadata\": {"
    "        \"create_instance_from_image_unpack_progress\": \"Unpack: 100% (2.18GB/s)\","
    "        \"progress\": {"
    "            \"percent\": \"100\","
    "            \"speed\": \"2184873949\","
    "            \"stage\": \"create_instance_from_image_unpack\""
    "          }"
    "      },"
    "    \"resources\": {"
    "        \"containers\": ["
    "            \"/1.0/containers/pied-piper-valley\""
    "         ],"
    "        \"instances\": ["
    "            \"/1.0/instances/pied-piper-valley\""
    "         ]"
    "     },"
    "    \"status\": \"Success\","
    "    \"status_code\": 200,"
    "    \"updated_at\": \"2020-05-18T15:14:21.104580212-04:00\""
    " },"
    "\"operation\": \"\","
    "\"status\": \"Success\","
    "\"status_code\": 200,"
    "\"type\": \"sync\""
    "}\n"};

const QByteArray vm_info_data{
    "{"
    "\"error\": \"\","
    "\"error_code\": 0,"
    "\"metadata\": {"
    "  \"architecture\": \"x86_64\","
    "  \"config\": {"
    "    \"image.architecture\": \"amd64\","
    "    \"image.description\": \"ubuntu 18.04 LTS amd64 (release) (20200506)\","
    "    \"image.label\": \"release\","
    "    \"image.os\": \"ubuntu\","
    "    \"image.release\": \"bionic\","
    "    \"image.serial\": \"20200506\","
    "    \"image.type\": \"disk1.img\","
    "    \"image.version\": \"18.04\","
    "    \"limits.cpu\": \"2\","
    "    \"limits.memory\": \"3221225472\","
    "    \"volatile.apply_template\": \"create\","
    "    \"volatile.base_image\": \"e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855\","
    "    \"volatile.eth0.hwaddr\": \"00:16:3e:b0:c5:f4\""
    "    },"
    "  \"created_at\": \"2020-05-13T15:31:46.194594923-04:00\","
    "  \"description\": \"\","
    "  \"devices\": {"
    "    \"config\": {"
    "      \"source\": \"cloud-init:config\","
    "      \"type\": \"disk\""
    "      },"
    "    \"root\": {"
    "      \"path\": \"/\","
    "      \"pool\": \"default\","
    "      \"size\": \"16106127360\","
    "      \"type\": \"disk\""
    "      }"
    "    },"
    "    \"ephemeral\": false,"
    "    \"expanded_config\": {"
    "      \"image.architecture\": \"amd64\","
    "      \"image.description\": \"ubuntu 18.04 LTS amd64 (release) (20200506)\","
    "      \"image.label\": \"release\","
    "      \"image.os\": \"ubuntu\","
    "      \"image.release\": \"bionic\","
    "      \"image.serial\": \"20200506\","
    "      \"image.type\": \"disk1.img\","
    "      \"image.version\": \"18.04\","
    "      \"limits.cpu\": \"2\","
    "      \"limits.memory\": \"3221225472\","
    "      \"volatile.apply_template\": \"create\","
    "      \"volatile.base_image\": \"e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855\","
    "      \"volatile.eth0.hwaddr\": \"00:16:3e:b0:c5:f4\""
    "      },"
    "    \"expanded_devices\": {"
    "      \"config\": {"
    "        \"source\": \"cloud-init:config\","
    "        \"type\": \"disk\""
    "        },"
    "      \"eth0\": {"
    "        \"name\": \"eth0\","
    "        \"nictype\": \"bridged\","
    "        \"parent\": \"lxdbr0\","
    "        \"type\": \"nic\""
    "        },"
    "      \"root\": {"
    "        \"path\": \"/\","
    "        \"pool\": \"default\","
    "        \"size\": \"16106127360\","
    "        \"type\": \"disk\""
    "        }"
    "      },"
    "    \"last_used_at\": \"2020-05-13T15:34:22.934800001-04:00\","
    "    \"location\": \"none\","
    "    \"name\": \"pied-piper-valley\","
    "    \"profiles\": ["
    "      \"default\""
    "      ],"
    "    \"stateful\": false,"
    "    \"status\": \"Stopped\","
    "    \"status_code\": 102,"
    "    \"type\": \"virtual-machine\""
    "  },"
    "  \"operation\": \"\","
    "  \"status\": \"Success\","
    "  \"status_code\": 200,"
    "  \"type\": \"sync\""
    "}\n"};

const QByteArray start_vm_data{"{"
                               "\"error\": \"\","
                               "\"error_code\": 0,"
                               "\"metadata\": {"
                               "  \"class\": \"task\","
                               "  \"created_at\": \"2020-05-19T11:17:20.979902453-04:00\","
                               "  \"description\": \"Starting container\","
                               "  \"err\": \"\","
                               "  \"id\": \"b043d632-5c48-44b3-983c-a25660d61164\","
                               "  \"location\": \"none\","
                               "  \"may_cancel\": false,"
                               "  \"metadata\": null,"
                               "  \"resources\": {"
                               "    \"containers\": ["
                               "      \"/1.0/containers/pied-piper-valley\""
                               "      ]"
                               "    },"
                               "  \"status\": \"Running\","
                               "  \"status_code\": 103,"
                               "  \"updated_at\": \"2020-05-19T11:17:20.979902453-04:00\""
                               "  },"
                               "\"operation\": \"/1.0/operations/b043d632-5c48-44b3-983c-a25660d61164\","
                               "\"status\": \"Operation created\","
                               "\"status_code\": 100,"
                               "\"type\": \"async\""
                               "}\n"};

const QByteArray stop_vm_data{"{"
                              "\"error\": \"\","
                              "\"error_code\": 0,"
                              "\"metadata\": {"
                              "  \"class\": \"task\","
                              "  \"created_at\": \"2020-05-19T11:17:20.979902453-04:00\","
                              "  \"description\": \"Stopping container\","
                              "  \"err\": \"\","
                              "  \"id\": \"b043d632-5c48-44b3-983c-a25660d61164\","
                              "  \"location\": \"none\","
                              "  \"may_cancel\": false,"
                              "  \"metadata\": null,"
                              "  \"resources\": {"
                              "    \"containers\": ["
                              "      \"/1.0/containers/pied-piper-valley\""
                              "      ]"
                              "    },"
                              "  \"status\": \"Running\","
                              "  \"status_code\": 103,"
                              "  \"updated_at\": \"2020-05-19T11:17:20.979902453-04:00\""
                              "  },"
                              "\"operation\": \"/1.0/operations/b043d632-5c48-44b3-983c-a25660d61164\","
                              "\"status\": \"Operation created\","
                              "\"status_code\": 100,"
                              "\"type\": \"async\""
                              "}\n"};

const QByteArray vm_state_stopped_data{"{"
                                       "\"error\": \"\","
                                       "\"error_code\": 0,"
                                       "\"metadata\": {"
                                       "  \"cpu\": {"
                                       "    \"usage\": 0"
                                       "    },"
                                       "  \"disk\": null,"
                                       "  \"memory\": {"
                                       "    \"swap_usage\": 0,"
                                       "    \"swap_usage_peak\": 0,"
                                       "    \"usage\": 0,"
                                       "    \"usage_peak\": 0"
                                       "    },"
                                       "  \"network\": null,"
                                       "  \"pid\": 0,"
                                       "  \"processes\": 0,"
                                       "  \"status\": \"Stopped\","
                                       "  \"status_code\": 102"
                                       "  },"
                                       "\"operation\": \"\","
                                       "\"status\": \"Success\","
                                       "\"status_code\": 200,"
                                       "\"type\": \"sync\""
                                       "}\n"};

const QByteArray vm_state_starting_data{"{"
                                        "\"error\": \"\","
                                        "\"error_code\": 0,"
                                        "\"metadata\": {"
                                        "  \"cpu\": {"
                                        "    \"usage\": 0"
                                        "    },"
                                        "  \"disk\": null,"
                                        "  \"memory\": {"
                                        "    \"swap_usage\": 0,"
                                        "    \"swap_usage_peak\": 0,"
                                        "    \"usage\": 0,"
                                        "    \"usage_peak\": 0"
                                        "    },"
                                        "  \"network\": null,"
                                        "  \"pid\": 0,"
                                        "  \"processes\": 0,"
                                        "  \"status\": \"Starting\","
                                        "  \"status_code\": 106"
                                        "  },"
                                        "\"operation\": \"\","
                                        "\"status\": \"Success\","
                                        "\"status_code\": 200,"
                                        "\"type\": \"sync\""
                                        "}\n"};

const QByteArray vm_state_freezing_data{"{"
                                        "\"error\": \"\","
                                        "\"error_code\": 0,"
                                        "\"metadata\": {"
                                        "  \"cpu\": {"
                                        "    \"usage\": 0"
                                        "    },"
                                        "  \"disk\": null,"
                                        "  \"memory\": {"
                                        "    \"swap_usage\": 0,"
                                        "    \"swap_usage_peak\": 0,"
                                        "    \"usage\": 0,"
                                        "    \"usage_peak\": 0"
                                        "    },"
                                        "  \"network\": null,"
                                        "  \"pid\": 0,"
                                        "  \"processes\": 0,"
                                        "  \"status\": \"Freezing\","
                                        "  \"status_code\": 109"
                                        "  },"
                                        "\"operation\": \"\","
                                        "\"status\": \"Success\","
                                        "\"status_code\": 200,"
                                        "\"type\": \"sync\""
                                        "}\n"};

const QByteArray vm_state_frozen_data{"{"
                                      "\"error\": \"\","
                                      "\"error_code\": 0,"
                                      "\"metadata\": {"
                                      "  \"cpu\": {"
                                      "    \"usage\": 0"
                                      "    },"
                                      "  \"disk\": null,"
                                      "  \"memory\": {"
                                      "    \"swap_usage\": 0,"
                                      "    \"swap_usage_peak\": 0,"
                                      "    \"usage\": 0,"
                                      "    \"usage_peak\": 0"
                                      "    },"
                                      "  \"network\": null,"
                                      "  \"pid\": 0,"
                                      "  \"processes\": 0,"
                                      "  \"status\": \"Frozen\","
                                      "  \"status_code\": 110"
                                      "  },"
                                      "\"operation\": \"\","
                                      "\"status\": \"Success\","
                                      "\"status_code\": 200,"
                                      "\"type\": \"sync\""
                                      "}\n"};

const QByteArray vm_state_cancelling_data{"{"
                                          "\"error\": \"\","
                                          "\"error_code\": 0,"
                                          "\"metadata\": {"
                                          "  \"cpu\": {"
                                          "    \"usage\": 0"
                                          "    },"
                                          "  \"disk\": null,"
                                          "  \"memory\": {"
                                          "    \"swap_usage\": 0,"
                                          "    \"swap_usage_peak\": 0,"
                                          "    \"usage\": 0,"
                                          "    \"usage_peak\": 0"
                                          "    },"
                                          "  \"network\": null,"
                                          "  \"pid\": 0,"
                                          "  \"processes\": 0,"
                                          "  \"status\": \"Cancelling\","
                                          "  \"status_code\": 104"
                                          "  },"
                                          "\"operation\": \"\","
                                          "\"status\": \"Success\","
                                          "\"status_code\": 200,"
                                          "\"type\": \"sync\""
                                          "}\n"};

const QByteArray vm_state_other_data{"{"
                                     "\"error\": \"\","
                                     "\"error_code\": 0,"
                                     "\"metadata\": {"
                                     "  \"cpu\": {"
                                     "    \"usage\": 0"
                                     "    },"
                                     "  \"disk\": null,"
                                     "  \"memory\": {"
                                     "    \"swap_usage\": 0,"
                                     "    \"swap_usage_peak\": 0,"
                                     "    \"usage\": 0,"
                                     "    \"usage_peak\": 0"
                                     "    },"
                                     "  \"network\": null,"
                                     "  \"pid\": 0,"
                                     "  \"processes\": 0,"
                                     "  \"status\": \"Bogus\","
                                     "  \"status_code\": 115"
                                     "  },"
                                     "\"operation\": \"\","
                                     "\"status\": \"Success\","
                                     "\"status_code\": 200,"
                                     "\"type\": \"sync\""
                                     "}\n"};

const QByteArray vm_state_fully_running_data{"{"
                                             "\"error\": \"\","
                                             "\"error_code\": 0,"
                                             "\"metadata\": {"
                                             "  \"cpu\": {"
                                             "    \"usage\": 0"
                                             "    },"
                                             "  \"disk\": {"
                                             "    \"root\": {"
                                             "      \"usage\": 100352"
                                             "      }"
                                             "    },"
                                             "  \"memory\": {"
                                             "    \"swap_usage\": 0,"
                                             "    \"swap_usage_peak\": 0,"
                                             "    \"usage\": 0,"
                                             "    \"usage_peak\": 0"
                                             "    },"
                                             "  \"network\": {"
                                             "    \"eth0\": {"
                                             "      \"addresses\": ["
                                             "        {"
                                             "          \"address\": \"10.217.27.168\","
                                             "          \"family\": \"inet\","
                                             "          \"netmask\": \"24\","
                                             "          \"scope\": \"global\""
                                             "        }"
                                             "      ],"
                                             "      \"counters\": {"
                                             "        \"bytes_received\": 0,"
                                             "        \"bytes_sent\": 0,"
                                             "        \"packets_received\": 0,"
                                             "        \"packets_sent\": 0"
                                             "      },"
                                             "      \"host_name\": \"tape3019389\","
                                             "      \"hwaddr\": \"00:16:3e:13:36:01\","
                                             "      \"mtu\": 1500,"
                                             "      \"state\": \"up\","
                                             "      \"type\": \"broadcast\""
                                             "    }"
                                             "  },"
                                             "  \"pid\": 1266500,"
                                             "  \"processes\": -1,"
                                             "  \"status\": \"Running\","
                                             "  \"status_code\": 103"
                                             "  },"
                                             "\"operation\": \"\","
                                             "\"status\": \"Success\","
                                             "\"status_code\": 200,"
                                             "\"type\": \"sync\""
                                             "}\n"};

const QByteArray vm_state_partial_running_data{"{"
                                               "\"error\": \"\","
                                               "\"error_code\": 0,"
                                               "\"metadata\": {"
                                               "  \"cpu\": {"
                                               "    \"usage\": 0"
                                               "    },"
                                               "  \"disk\": null,"
                                               "  \"memory\": {"
                                               "    \"swap_usage\": 0,"
                                               "    \"swap_usage_peak\": 0,"
                                               "    \"usage\": 0,"
                                               "    \"usage_peak\": 0"
                                               "    },"
                                               "  \"network\": null,"
                                               "  \"pid\": 0,"
                                               "  \"processes\": 0,"
                                               "  \"status\": \"Running\","
                                               "  \"status_code\": 103"
                                               "  },"
                                               "\"operation\": \"\","
                                               "\"status\": \"Success\","
                                               "\"status_code\": 200,"
                                               "\"type\": \"sync\""
                                               "}\n"};

const QByteArray vm_stop_wait_task_data{"{"
                                        "\"error\": \"\","
                                        "\"error_code\": 0,"
                                        "\"metadata\": {"
                                        "  \"class\": \"task\","
                                        "  \"created_at\": \"2020-05-20T10:22:02.684673072-04:00\","
                                        "  \"description\": \"Stopping container\","
                                        "  \"err\": \"\","
                                        "  \"id\": \"b043d632-5c48-44b3-983c-a25660d61164\","
                                        "  \"location\": \"none\","
                                        "  \"may_cancel\": false,"
                                        "  \"metadata\": null,"
                                        "  \"resources\": {"
                                        "    \"containers\": ["
                                        "      \"/1.0/containers/pied-piper-valley\""
                                        "      ]"
                                        "    },"
                                        "  \"status\": \"Success\","
                                        "  \"status_code\": 200,"
                                        "  \"updated_at\": \"2020-05-20T10:22:02.684673072-04:00\""
                                        "  },"
                                        "\"operation\": \"\","
                                        "\"status\": \"Success\","
                                        "\"status_code\": 200,"
                                        "\"type\": \"sync\""
                                        "}\n"};

const QByteArray lxd_server_info_data{"{"
                                      "\"type\": \"sync\","
                                      "\"status\": \"Success\","
                                      "\"status_code\": 200,"
                                      "\"operation\": \"\","
                                      "\"error_code\": 0,"
                                      "\"error\": \"\","
                                      "\"metadata\": {"
                                      "  \"config\": {},"
                                      "  \"api_extensions\": ["
                                      "  ],"
                                      "  \"api_status\": \"stable\","
                                      "  \"api_version\": \"1.0\","
                                      "  \"auth\": \"trusted\","
                                      "  \"public\": false,"
                                      "  \"auth_methods\": ["
                                      "    \"tls\""
                                      "  ],"
                                      "  \"environment\": {"
                                      "    \"addresses\": [],"
                                      "    \"architectures\": ["
                                      "      \"x86_64\","
                                      "      \"i686\""
                                      "    ],"
                                      "    \"certificate\": \"\n\","
                                      "    \"certificate_fingerprint\": \"\","
                                      "    \"driver\": \"lxc\","
                                      "    \"driver_version\": \"4.0.2\","
                                      "    \"firewall\": \"xtables\","
                                      "    \"kernel\": \"Linux\","
                                      "    \"kernel_architecture\": \"x86_64\","
                                      "    \"kernel_features\": {"
                                      "      \"netnsid_getifaddrs\": \"true\","
                                      "      \"seccomp_listener\": \"true\","
                                      "      \"seccomp_listener_continue\": \"true\","
                                      "      \"shiftfs\": \"false\","
                                      "      \"uevent_injection\": \"true\","
                                      "      \"unpriv_fscaps\": \"true\""
                                      "    },"
                                      "    \"kernel_version\": \"5.4.0-31-generic\","
                                      "    \"lxc_features\": {"
                                      "      \"cgroup2\": \"true\","
                                      "      \"mount_injection_file\": \"true\","
                                      "      \"network_gateway_device_route\": \"true\","
                                      "      \"network_ipvlan\": \"true\","
                                      "      \"network_l2proxy\": \"true\","
                                      "      \"network_phys_macvlan_mtu\": \"true\","
                                      "      \"network_veth_router\": \"true\","
                                      "      \"pidfd\": \"true\","
                                      "      \"seccomp_notify\": \"true\""
                                      "      },"
                                      "    \"os_name\": \"Ubuntu\","
                                      "    \"os_version\": \"20.04\","
                                      "    \"project\": \"default\","
                                      "    \"server\": \"lxd\","
                                      "    \"server_clustered\": false,"
                                      "    \"server_name\": \"shady\","
                                      "    \"server_pid\": 842930,"
                                      "    \"server_version\": \"4.1\","
                                      "    \"storage\": \"zfs\","
                                      "    \"storage_version\": \"0.8.3-1ubuntu12\""
                                      "    }"
                                      "  }"
                                      "}"};

const QByteArray image_info_data{
    "{"
    "\"type\": \"sync\","
    "\"status\": \"Success\","
    "\"status_code\": 200,"
    "\"operation\": \"\","
    "\"error_code\": 0,"
    "\"error\": \"\","
    "\"metadata\": {"
    "  \"auto_update\": false,"
    "  \"properties\": {"
    "    \"architecture\": \"amd64\","
    "    \"description\": \"ubuntu 18.04 LTS amd64 (release) (20200519.1)\","
    "    \"label\": \"release\","
    "    \"os\": \"ubuntu\","
    "    \"release\": \"bionic\","
    "    \"serial\": \"20200519.1\","
    "    \"type\": \"disk1.img\","
    "    \"version\": \"18.04\""
    "    },"
    "  \"public\": false,"
    "  \"expires_at\": \"2023-04-25T20:00:00-04:00\","
    "  \"profiles\": ["
    "    \"default\""
    "    ],"
    "  \"aliases\": [],"
    "  \"architecture\": \"x86_64\","
    "  \"cached\": false,"
    "  \"filename\": \"ubuntu-18.04-server-cloudimg-amd64-lxd.tar.xz\","
    "  \"fingerprint\": \"e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855\","
    "  \"size\": 345572108,"
    "  \"type\": \"virtual-machine\","
    "  \"created_at\": \"2020-05-18T20:00:00-04:00\","
    "  \"last_used_at\": \"2020-06-04T14:25:42.334466315-04:00\","
    "  \"uploaded_at\": \"2020-06-04T14:25:41.622958476-04:00\""
    "  }"
    "}"};

const QByteArray image_download_task_data{"{"
                                          "\"error\": \"\","
                                          "\"error_code\": 0,"
                                          "\"metadata\": {"
                                          "    \"class\": \"task\","
                                          "    \"created_at\": \"2020-06-09T16:30:04.381432577-04:00\","
                                          "    \"description\": \"Downloading image\","
                                          "    \"err\": \"\","
                                          "    \"id\": \"0a19a412-03d0-4118-bee8-a3095f06d4da\","
                                          "    \"location\": \"none\","
                                          "    \"may_cancel\": false,"
                                          "    \"metadata\": null,"
                                          "    \"resources\": null,"
                                          "    \"status\": \"Running\","
                                          "    \"status_code\": 103,"
                                          "    \"updated_at\": \"2020-06-09T16:30:04.381432577-04:00\""
                                          "  },"
                                          "\"operation\": \"/1.0/operations/0a19a412-03d0-4118-bee8-a3095f06d4da\","
                                          "\"status\": \"Operation created\","
                                          "\"status_code\": 100,"
                                          "\"type\": \"async\""
                                          "}"};

const QByteArray image_downloading_task_data{"{"
                                             "\"error\": \"\","
                                             "\"error_code\": 0,"
                                             "\"metadata\": {"
                                             "    \"class\": \"task\","
                                             "    \"created_at\": \"2020-06-09T16:30:04.381432577-04:00\","
                                             "    \"description\": \"Downloading image\","
                                             "    \"err\": \"\","
                                             "    \"id\": \"0a19a412-03d0-4118-bee8-a3095f06d4da\","
                                             "    \"location\": \"none\","
                                             "    \"may_cancel\": true,"
                                             "    \"metadata\": {"
                                             "        \"download_progress\": \"rootfs: 25% (4.95MB/s)\""
                                             "      },"
                                             "    \"resources\": null,"
                                             "    \"status\": \"Running\","
                                             "    \"status_code\": 103,"
                                             "    \"updated_at\": \"2020-06-09T16:34:06.381754577-04:00\""
                                             "  },"
                                             "\"operation\": \"/1.0/operations/0a19a412-03d0-4118-bee8-a3095f06d4da\","
                                             "\"status\": \"Success\","
                                             "\"status_code\": 200,"
                                             "\"type\": \"async\""
                                             "}"};

const QByteArray metadata_downloading_task_data{
    "{"
    "\"error\": \"\","
    "\"error_code\": 0,"
    "\"metadata\": {"
    "    \"class\": \"task\","
    "    \"created_at\": \"2020-06-09T16:30:04.381432577-04:00\","
    "    \"description\": \"Downloading image\","
    "    \"err\": \"\","
    "    \"id\": \"0a19a412-03d0-4118-bee8-a3095f06d4da\","
    "    \"location\": \"none\","
    "    \"may_cancel\": true,"
    "    \"metadata\": {"
    "        \"download_progress\": \"metadata: 100% (4.95MB/s)\""
    "      },"
    "    \"resources\": null,"
    "    \"status\": \"Running\","
    "    \"status_code\": 103,"
    "    \"updated_at\": \"2020-06-09T16:34:06.381754577-04:00\""
    "  },"
    "\"operation\": \"/1.0/operations/0a19a412-03d0-4118-bee8-a3095f06d4da\","
    "\"status\": \"Success\","
    "\"status_code\": 200,"
    "\"type\": \"async\""
    "}"};
} // namespace test
} // namespace multipass

#endif // MULTIPASS_MOCK_LXD_SERVER_RESPONSES_H
