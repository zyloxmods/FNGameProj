#pragma once
#include "CoreMinimal.h"
#include "GameStateComponent.h"
#include "CurieElementAttachedSignatureDelegate.h"
#include "CurieElementBeginInteractSignatureDelegate.h"
#include "CurieElementDetachedSignatureDelegate.h"
#include "CurieElementEndInteractSignatureDelegate.h"
#include "CurieElementInteractSignatureDelegate.h"
#include "CurieStateAttachedSignatureDelegate.h"
#include "CurieStateDetachedSignatureDelegate.h"
#include "CurieManager.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CURIE_API UCurieManager : public UGameStateComponent {
    GENERATED_BODY()
public:
    UCurieManager();
    UFUNCTION(BlueprintCallable)
    void UnbindDelegateForCurieStateDetached(UObject* CurieOwner, const FCurieStateDetachedSignature& Delegate);
    
    UFUNCTION(BlueprintCallable)
    void UnbindDelegateForCurieStateAttached(UObject* CurieOwner, const FCurieStateAttachedSignature& Delegate);
    
    UFUNCTION(BlueprintCallable)
    void UnbindDelegateForCurieElementInteract(UObject* CurieOwner, const FCurieElementInteractSignature& Delegate);
    
    UFUNCTION(BlueprintCallable)
    void UnbindDelegateForCurieElementEndInteract(UObject* CurieOwner, const FCurieElementEndInteractSignature& Delegate);
    
    UFUNCTION(BlueprintCallable)
    void UnbindDelegateForCurieElementDetached(UObject* CurieOwner, const FCurieElementDetachedSignature& Delegate);
    
    UFUNCTION(BlueprintCallable)
    void UnbindDelegateForCurieElementBeginInteract(UObject* CurieOwner, const FCurieElementBeginInteractSignature& Delegate);
    
    UFUNCTION(BlueprintCallable)
    void UnbindDelegateForCurieElementAttached(UObject* CurieOwner, const FCurieElementAttachedSignature& Delegate);
    
    UFUNCTION(BlueprintCallable)
    void BindDelegateForCurieStateDetached(UObject* CurieOwner, const FCurieStateDetachedSignature& Delegate);
    
    UFUNCTION(BlueprintCallable)
    void BindDelegateForCurieStateAttached(UObject* CurieOwner, const FCurieStateAttachedSignature& Delegate);
    
    UFUNCTION(BlueprintCallable)
    void BindDelegateForCurieElementInteract(UObject* CurieOwner, const FCurieElementInteractSignature& Delegate);
    
    UFUNCTION(BlueprintCallable)
    void BindDelegateForCurieElementEndInteract(UObject* CurieOwner, const FCurieElementEndInteractSignature& Delegate);
    
    UFUNCTION(BlueprintCallable)
    void BindDelegateForCurieElementDetached(UObject* CurieOwner, const FCurieElementDetachedSignature& Delegate);
    
    UFUNCTION(BlueprintCallable)
    void BindDelegateForCurieElementBeginInteract(UObject* CurieOwner, const FCurieElementBeginInteractSignature& Delegate);
    
    UFUNCTION(BlueprintCallable)
    void BindDelegateForCurieElementAttached(UObject* CurieOwner, const FCurieElementAttachedSignature& Delegate);
    
};

