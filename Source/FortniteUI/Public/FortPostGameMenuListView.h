#pragma once
#include "CoreMinimal.h"
#include "Components/ListViewBase.h"
#include "Templates/SubclassOf.h"
#include "FortPostGameMenuListView.generated.h"

class UFortPostGameMenuEntry;
class UFortPostGameMenuItemShopEntry;

UCLASS(Blueprintable)
class UFortPostGameMenuListView : public UListViewBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortPostGameMenuEntry> EntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortPostGameMenuItemShopEntry> ItemShopEntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EntrySpacing;
    
public:
};

