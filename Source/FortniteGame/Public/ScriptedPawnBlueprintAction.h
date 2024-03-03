#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ScriptedPawnCompletePinDelegate.h"
#include "ScriptedPawnBlueprintAction.generated.h"

class AFortPlayerPawn;
class UObject;
class UScriptedPawnBlueprintAction;

UCLASS(Blueprintable)
class UScriptedPawnBlueprintAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScriptedPawnCompletePin ScriptCompletePin;
    
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
    UScriptedPawnBlueprintAction();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    static UScriptedPawnBlueprintAction* SpawnScriptedPawn(const FString& NewScriptName, const FVector Location, const FRotator Rotation);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void OnScriptComplete();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void InternalSpawnScriptedPawn();
    
};

