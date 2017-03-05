require 'sinatra'

use Rack::Auth::Basic do |username, password|
  username == ENV['BASIC_AUTH_USERNAME'] && password == ENV['BASIC_AUTH_PASSWORD']
end

get '/' do
  content_type 'application/pdf'
  File.read(File.join('app/book.pdf'))
end
