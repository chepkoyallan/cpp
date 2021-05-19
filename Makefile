help:
	# This Makefile provides common wrappers around Bazel invocations.
	#
	### Verify targets
	#
	# verify             - runs all test targets (bazel test //...)
	# verify_deps        - ensure go module files are up to date (hack/update-deps.sh)
	# verify_chart       - runs Helm chart linter
	#
	### Generate targets
	#
	# generate           - regenerate all generated files
	#
	### Build targets
	#
	# controller         - build a binary of the 'controller'
	# cainjector         - build a binary of the 'cainjector'
	# webhook            - build a binary of the 'webhook'
	# acmesolver         - build a binary of the 'acmesolver'
	# images             - builds docker images for all of the components, saving them in your Docker daemon
	# images_push        - pushes docker images to the target registry
	#
	# Image targets can be run with optional args DOCKER_REGISTRY and APP_VERSION:
	#
	# make images DOCKER_REGISTRY=quay.io/yourusername APP_VERSION=v0.11.0-dev.my-feature
	#
	# Images can be pushed with optional args DOCKER_REGISTRY and APP_VERSION:
	#
	# make images_push DOCKER_REGISTRY=quay.io/yourusername APP_VERSION=v0.11.0-dev.my-feature
	#


build-project:
	bazel build //main:hello-world

run-project:
	bazel run //main:hello-world

run-world:
	bazel run //main:world

run-output:
	bazel run //main:output

make-person:
	bazel run //main:human
