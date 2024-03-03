#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Blueprint/IUserListEntry.h"
#include "AthenaCollectionListColumnEntry.generated.h"

class UDynamicEntryBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaCollectionListColumnEntry : public UCommonUserWidget, public IUserListEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_ListEntries;
    
public:
    UAthenaCollectionListColumnEntry();
    
    // Fix for true pure virtual functions not being implemented
};

