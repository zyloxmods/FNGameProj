#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MyTownWorkerPersonalityData.h"
#include "MyTownWorkerSetBonusData.h"
#include "Templates/SubclassOf.h"
#include "MyTownData.generated.h"

class UFortCurrencyItemDefinition;
class UFortPersistentResourceItemDefinition;
class UFortTokenType;
class UGameplayEffect;

UCLASS(Blueprintable)
class FORTNITEGAME_API UMyTownData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMyTownWorkerPersonalityData> WorkerPersonalities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMyTownWorkerSetBonusData> WorkerSetBonuses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPersistentResourceItemDefinition* PersonnelXpItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPersistentResourceItemDefinition* HeroXpItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPersistentResourceItemDefinition* VoucherItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPersistentResourceItemDefinition* SchematicXpItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortCurrencyItemDefinition* CurrencyItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortTokenType* SkillPointItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortTokenType* ResearchPointItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> TotalRatingGameplayEffect;
    
    UMyTownData();
};

