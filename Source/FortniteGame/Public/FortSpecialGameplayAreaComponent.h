#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "SpecialGameplayAreaLootData.h"
#include "SpecialGameplayAreaOverrideBodyPartsExtraSpecial.h"
#include "FortSpecialGameplayAreaComponent.generated.h"

class AActor;
class AFortVolume;
class APawn;
class UAthenaGliderItemDefinition;
class UCustomCharacterPart;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortSpecialGameplayAreaComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCustomCharacterPart*> OverrideBodyParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SkinMetaTagsToSkip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpecialGameplayAreaOverrideBodyPartsExtraSpecial> OverrideBodyPartsExtraSpecial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAthenaGliderItemDefinition*> OverrideGliders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpecialGameplayAreaLootData> OverrideLootData;
    
public:
    UFortSpecialGameplayAreaComponent();
private:
    UFUNCTION(BlueprintCallable)
    void OverrideBodyPartAfterPawnPossession(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void OnExitVolume(AActor* Actor, UActorComponent* ActorComponent, APawn* InstigatorPawn, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void OnEnterVolume(AActor* Actor, UActorComponent* ActorComponent, APawn* InstigatorPawn, AFortVolume* Volume);
    
};

