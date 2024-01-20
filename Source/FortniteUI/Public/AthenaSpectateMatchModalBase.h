#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "AthenaSpectateMatchModalBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpectateMatchModalBase : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UAthenaSpectateMatchModalBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void JoinGameSession(const FString& GameSessionIdStr) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void JoinFriendSession(const FString& FriendName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameSessionString(const FString& String) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFriendNames(TArray<FString>& FriendNames) const;
    
    UFUNCTION(BlueprintCallable)
    void BuildFriendNameIdMap();
    
};

