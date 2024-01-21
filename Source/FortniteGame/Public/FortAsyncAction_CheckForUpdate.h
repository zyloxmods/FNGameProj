#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UpdateCheckDelegateDelegate.h"
#include "FortAsyncAction_CheckForUpdate.generated.h"

class UFortAsyncAction_CheckForUpdate;
class UObject;

UCLASS(Blueprintable)
class UFortAsyncAction_CheckForUpdate : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateCheckDelegate OnUpToDate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateCheckDelegate OnUpdateRequired;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDialogOnFailure;
    
public:
    UFortAsyncAction_CheckForUpdate();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static UFortAsyncAction_CheckForUpdate* CheckForUpdate(UObject* InWorldContextObject, bool InShowDialogOnFailure);
    
};

