#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Components/ListViewBase.h"
#include "Templates/SubclassOf.h"
#include "FortServerBrowserListView.generated.h"

class UFortCreativeServerInfoTile;
class UFortPlaylistSelectionActionTile;
class UFortServerActionTile;

UCLASS(Blueprintable)
class UFortServerBrowserListView : public UListViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EOrientation> Orientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EntrySpacing;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCreativeServerInfoTile> CreativeServerInfoTileEntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortServerActionTile> ServerActionTileEntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortServerActionTile> OwnServerActionTileEntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortPlaylistSelectionActionTile> PlaylistSelectionActionTileEntryClass;
    
public:
};

