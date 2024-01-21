#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "CreateWidgetAsyncDelegateDelegate.h"
#include "FortAsyncAction_CreateWidgetAsync.generated.h"

class APlayerController;
class UFortAsyncAction_CreateWidgetAsync;
class UObject;
class UUserWidget;

UCLASS(Blueprintable)
class UFortAsyncAction_CreateWidgetAsync : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreateWidgetAsyncDelegate OnComplete;
    
    UFortAsyncAction_CreateWidgetAsync();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFortAsyncAction_CreateWidgetAsync* CreateWidgetAsync(UObject* WorldContextObject, TSoftClassPtr<UUserWidget> UserWidgetSoftClass, APlayerController* OwningPlayer, bool bSuspendInputUntilComplete);
    
};

