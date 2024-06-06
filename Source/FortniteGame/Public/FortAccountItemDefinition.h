#pragma once
#include "CoreMinimal.h"
#include "Engine/CurveTable.h"
#include "Engine/DataTable.h"
#include "FortPersistableItemDefinition.h"
#include "FortAccountItemDefinition.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAccountItemDefinition : public UFortPersistableItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Account Item")
    FCurveTableRowHandle LevelToXpHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Sacrifice")
    FCurveTableRowHandle LevelToSacrificeXpHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Sacrifice")
    FDataTableRowHandle SacrificeRecipe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Sacrifice")
    FDataTableRowHandle TransmogSacrificeRow;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Conversion")
    TArray<FDataTableRowHandle> ConversionRecipes;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Conversion")
    FDataTableRowHandle UpgradeRarityRecipeHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Level")
    int32 MinLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Level")
    int32 MaxLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GrantToProfileType;
    
public:
    UFortAccountItemDefinition(const FObjectInitializer& ObjectInitializer);
};

