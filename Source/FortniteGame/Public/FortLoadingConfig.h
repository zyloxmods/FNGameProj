#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Styling/SlateBrush.h"
#include "FortEarlyAcessLoadingScreen.h"
#include "FortPSALoadingScreen.h"
#include "FortSubGameLoadingScreen.h"
#include "FortLoadingConfig.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortLoadingConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortSubGameLoadingScreen LoadingScreenFallback;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortSubGameLoadingScreen LoadingScreens[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortEarlyAcessLoadingScreen LoadingScreenEA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush LoadingScreenMissionBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush LoadingScreenTipBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPSALoadingScreen> PSALoadingScreens;
    
    UFortLoadingConfig();
};

