#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "CurieContainerHandle.h"
#include "CurieInteractParamsHandle.h"
#include "CurieInterface.generated.h"

UINTERFACE(Blueprintable)
class CURIE_API UCurieInterface : public UInterface {
    GENERATED_BODY()
};

class CURIE_API ICurieInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCurieStateDetached_BP(const FCurieContainerHandle& CurieContainerHandle, const FGameplayTag& StateTag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCurieStateConsumed_BP(const FCurieContainerHandle& CurieContainerHandle, const FGameplayTag& StateTag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCurieStateAttached_BP(const FCurieContainerHandle& CurieContainerHandle, const FGameplayTag& StateTag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCurieElementInteractEnded_BP(const FCurieContainerHandle& CurieContainerHandle, const FGameplayTag& ElementTag, const FCurieInteractParamsHandle& InteractParamsHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCurieElementInteractBegun_BP(const FCurieContainerHandle& CurieContainerHandle, const FGameplayTag& ElementTag, const FCurieInteractParamsHandle& InteractParamsHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCurieElementInteract_BP(const FCurieContainerHandle& CurieContainerHandle, const FGameplayTag& ElementTag, const FCurieInteractParamsHandle& InteractParamsHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCurieElementDetached_BP(const FCurieContainerHandle& CurieContainerHandle, const FGameplayTag& ElementTag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCurieElementAttached_BP(const FCurieContainerHandle& CurieContainerHandle, const FGameplayTag& ElementTag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCurieContainerShutdown_BP(const FCurieContainerHandle& CurieContainerHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCurieContainerInitialized_BP(const FCurieContainerHandle& CurieContainerHandle);
    
};

