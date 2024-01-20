#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AthenaCosmeticItemDefinition.h"
#include "AthenaLoadingScreenItemDefinition.generated.h"

class UObject;
class UTexture2D;
class UUserWidget;

UCLASS(Blueprintable, MinimalAPI)
class UAthenaLoadingScreenItemDefinition : public UAthenaCosmeticItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Category = "Visual")
    TSoftObjectPtr<UTexture2D>        BackgroundImage;

    UPROPERTY(EditAnywhere, Category = "Visual")
    TSoftObjectPtr<UObject> BackgroundMaterialOrTexture;

    UPROPERTY(EditAnywhere, Category = "Visual")
    TSoftClassPtr<UUserWidget> BackgroundWidget;

    UPROPERTY(EditAnywhere, Category = "Visual")
    FVector2D BackgroundDesiredSize = FVector2D(1920, 1080);

    UPROPERTY(EditAnywhere, Category = "Visual")
    FLinearColor BackgroundColor = FLinearColor(0.012286, 0.028426, 0.165132, 1.0);
    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("AthenaLoadingScreen", GetFName());
    }
};

