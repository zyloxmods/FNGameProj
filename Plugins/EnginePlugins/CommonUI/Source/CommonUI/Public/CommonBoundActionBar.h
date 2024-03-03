#pragma once
#include "CoreMinimal.h"
#include "Components/DynamicEntryBoxBase.h"
#include "Templates/SubclassOf.h"
#include "CommonBoundActionBar.generated.h"

class UCommonBoundActionButton;

UCLASS(Blueprintable)
class COMMONUI_API UCommonBoundActionBar : public UDynamicEntryBoxBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonBoundActionButton> ActionButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayOwningPlayerActionsOnly;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions);
    
};

