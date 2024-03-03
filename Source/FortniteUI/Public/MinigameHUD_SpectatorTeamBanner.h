#pragma once
#include "CoreMinimal.h"
#include "AthenaBroadcastSquadStatusWidget.h"
#include "MinigameHUD_SpectatorTeamBanner.generated.h"

class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMinigameHUD_SpectatorTeamBanner : public UAthenaBroadcastSquadStatusWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_BackgroundTone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_BackgroundShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Logo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Avatar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Overlap;
    
public:
    UMinigameHUD_SpectatorTeamBanner();
};

