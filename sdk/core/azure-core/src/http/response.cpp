// Copyright (c) Microsoft Corporation. All rights reserved.
// SPDX-License-Identifier: MIT

#include <map>
#include <string>
#include <vector>

#include <http/http.hpp>

using namespace azure::core::http;

uint16_t Response::getStatusCode() { return m_statusCode; }

std::string const& Response::getReasonPhrase() { return m_reasonPhrase; }

std::map<std::string, std::string> const& Response::getHeaders() { return this->m_headers; }

BodyStream* Response::getBodyStream() { return m_bodyStream; }

BodyBuffer* Response::getBodyBuffer() { return m_bodyBuffer; }

std::string Response::getHttpVersion() { return m_httpVersion; }

void Response::addHeader(std::string const& name, std::string const& value)
{
  this->m_headers.insert(std::pair<std::string, std::string>(name, value));
}
