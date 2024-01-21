#include "FortStandardGlobalActionDetailsDataSource.h"

void UFortStandardGlobalActionDetailsDataSource::SetGlobalUIContext(UFortGlobalUIContext* Value) {
}

void UFortStandardGlobalActionDetailsDataSource::SetGlobalAction(EFortGlobalAction Value) {
}

void UFortStandardGlobalActionDetailsDataSource::SetCommonInputSubsystem(UCommonInputSubsystem* Value) {
}

void UFortStandardGlobalActionDetailsDataSource::SetActionDetailsContext(const FFortGlobalActionDetailsFunctionContext& Value) {
}

void UFortStandardGlobalActionDetailsDataSource::HandlePlayerControllerChanged(UObject* Source) {
}

UFortStandardGlobalActionDetailsDataSource* UFortStandardGlobalActionDetailsDataSource::ConstructWithDefaultContexts(UObject* Outer, UWidget* ContextWidget, EFortGlobalAction GlobalAction, const FFortGlobalActionDetailsFunctionContext& NewActionDetailsContext) {
    return NULL;
}

UFortStandardGlobalActionDetailsDataSource* UFortStandardGlobalActionDetailsDataSource::Construct(UObject* Outer, UFortGlobalUIContext* NewGlobalUIContext, UCommonInputSubsystem* NewCommonInputSubsystem, EFortGlobalAction GlobalAction, const FFortGlobalActionDetailsFunctionContext& NewActionDetailsContext) {
    return NULL;
}

UFortStandardGlobalActionDetailsDataSource::UFortStandardGlobalActionDetailsDataSource() {
    this->GlobalUIContext = NULL;
    this->CommonInputSubsystem = NULL;
    this->FortPlayerController = NULL;
}

