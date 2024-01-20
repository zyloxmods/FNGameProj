#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateTypes.h"
#include "FortEarlyAcessLoadingScreen.generated.h"

USTRUCT(BlueprintType)
struct FFortEarlyAcessLoadingScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush EABackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBlockStyle EATextStyle;
    
    FORTNITEGAME_API FFortEarlyAcessLoadingScreen();
};

