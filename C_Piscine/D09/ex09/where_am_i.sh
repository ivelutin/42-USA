# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    where_am_i.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ivelutin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 11:13:20 by ivelutin          #+#    #+#              #
#    Updated: 2016/11/04 11:13:22 by ivelutin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ip_list=$(ifconfig | grep "inet " | cut -d' ' -f2)

if (test -z "$ip_list")
  then
    echo "Je suis perdu!"
  else
    echo $ip_list | (tr ' ' '\n')
fi
