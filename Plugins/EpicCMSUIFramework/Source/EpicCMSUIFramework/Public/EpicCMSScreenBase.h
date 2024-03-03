#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "EpicCMSScreenBase.generated.h"

class UDataTable;
class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class EPICCMSUIFRAMEWORK_API UEpicCMSScreenBase : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TileSetFieldName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> TileTypeToTileClassDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> LayoutErrorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> LayoutTypeToLayoutClassDataTable;
    
public:
    UEpicCMSScreenBase();
};

