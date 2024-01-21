#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortShowdownDivisionEventView.h"
#include "FortDivisionLobbyPanel.generated.h"

class UCommonButton;
class UFortLazyImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortDivisionLobbyPanel : public UFortShowdownDivisionEventView {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle EventDetailsAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* Image_CurrentDivisionFancy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* Image_CurrentDivisionPlain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* Image_NextDivision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_EventDetails;
    
public:
    UFortDivisionLobbyPanel();
};

