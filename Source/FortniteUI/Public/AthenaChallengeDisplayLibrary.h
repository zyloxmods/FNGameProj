#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FortChallengeSetStyle.h"
#include "AthenaChallengeDisplayLibrary.generated.h"

class UImage;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class FORTNITEUI_API UAthenaChallengeDisplayLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAthenaChallengeDisplayLibrary();
    UFUNCTION(BlueprintCallable)
    static FLinearColor GetChallengeStyleLightAccentColor(const FFortChallengeSetStyle& DisplayStyle);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyChallengeSetStyleColorsToMaterial(const FFortChallengeSetStyle& DisplayStyle, UMaterialInstanceDynamic* StyleMaterial);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyChallengeSetStyleColorsToImageMaterial(const FFortChallengeSetStyle& DisplayStyle, UImage* ImageWidget);
    
};

