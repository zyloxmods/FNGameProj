#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ScriptedPawnRunScriptCompletePinDelegate.h"
#include "ScriptedPawnRunScriptBlueprintAction.generated.h"

class AFortPlayerPawn;
class UObject;
class UScriptedPawnRunScriptBlueprintAction;

UCLASS(Blueprintable)
class UScriptedPawnRunScriptBlueprintAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScriptedPawnRunScriptCompletePin RunScriptCompletePin;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector SpawnLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRotator SpawnRotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString ScriptName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* ScriptedPawn;
    
public:
    UScriptedPawnRunScriptBlueprintAction();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    static UScriptedPawnRunScriptBlueprintAction* RunScriptOnPawn(const FString& NewScriptName, AFortPlayerPawn* TargetPawn);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void OnScriptComplete();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void InternalRunScriptOnPawn();
    
};

