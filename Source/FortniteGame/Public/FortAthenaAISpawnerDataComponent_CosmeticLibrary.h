#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "FortAthenaAISpawnerDataComponent_CosmeticBase.h"
#include "FortAthenaAISpawnerDataComponent_CosmeticLibrary.generated.h"

class UDataTable;
class UFortAthenaAIBotCosmeticLibraryData;

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaAISpawnerDataComponent_CosmeticLibrary : public UFortAthenaAISpawnerDataComponent_CosmeticBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFortAthenaAIBotCosmeticLibraryData>> CosmeticLibraries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DefaultCosmeticLibraryWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PredefinedCosmeticSetTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> EmotesDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat EmotesMaxCount;
    
public:
    UFortAthenaAISpawnerDataComponent_CosmeticLibrary();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetAICosmeticLibraryDataIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UFortAthenaAIBotCosmeticLibraryData* GetAICosmeticLibraryData() const;
    
};

