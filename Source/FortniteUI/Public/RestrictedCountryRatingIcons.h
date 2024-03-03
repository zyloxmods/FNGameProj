#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "RestrictedCountryRatingIcons.generated.h"

class UHorizontalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class URestrictedCountryRatingIcons : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HBox_RatingIcons;
    
public:
    URestrictedCountryRatingIcons();
};

