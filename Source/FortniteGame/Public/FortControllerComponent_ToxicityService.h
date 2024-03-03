#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FortControllerComponent_ToxicityService.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortControllerComponent_ToxicityService : public UActorComponent {
    GENERATED_BODY()
public:
    UFortControllerComponent_ToxicityService();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSanitizeStrings(const TArray<FString>& StringsToSanitize, int32 RequestID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSanitizeString(const FString& StringToSanitize, int32 RequestID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReturnSanitizedStrings(bool bSuccess, const TArray<FString>& SanitizedStrings, int32 RequestID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReturnSanitizedString(bool bSuccess, const FString& SanitizedString, int32 RequestID);
    
};

