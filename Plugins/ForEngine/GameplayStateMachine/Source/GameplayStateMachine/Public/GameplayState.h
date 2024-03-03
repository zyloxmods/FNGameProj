#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GameplayState.generated.h"

UCLASS(Abstract, Blueprintable)
class GAMEPLAYSTATEMACHINE_API UGameplayState : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplicates;
    
public:
    UGameplayState();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateState(const float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetStateId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndState(const FGameplayTag& NextStateId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginState(const FGameplayTag& PrevStateId);
    
};

