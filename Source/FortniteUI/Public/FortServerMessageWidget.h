#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "FortServerMessageWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortServerMessageWidget : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
    UFortServerMessageWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void SetServerMigrationDelegate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAlertBegin(int32 SecondsRemainingStart, int32 SecondsRemainingEnd, const FText& AlertText);
    
    UFUNCTION(BlueprintCallable)
    void HandleServerAlert(int32 TimeRemainingStart, int32 TimeRemainingEnd);
    
};

