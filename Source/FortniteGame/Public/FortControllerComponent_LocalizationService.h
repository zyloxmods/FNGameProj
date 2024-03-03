#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ReplicatedLocalizedDocument.h"
#include "FortControllerComponent_LocalizationService.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortControllerComponent_LocalizationService : public UActorComponent {
    GENERATED_BODY()
public:
    UFortControllerComponent_LocalizationService();
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestLocalizationDocument(const FString& InDocumentID, const FString& InLocale);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientLoadLocalizationDocument(const FReplicatedLocalizedDocument Document);
    
};

