#pragma once
#include "CoreMinimal.h"
#include "FortPSALoadingScreen.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FFortPSALoadingScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PercentChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumGames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> WidgetClass;
    
    FORTNITEGAME_API FFortPSALoadingScreen();
};

