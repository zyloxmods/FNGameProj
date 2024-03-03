#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Blueprint/IUserListEntry.h"
#include "AthenaAccoladeListEntryWidget.generated.h"

class UFortAccoladeItemDefinition;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaAccoladeListEntryWidget : public UCommonUserWidget, public IUserListEntry {
    GENERATED_BODY()
public:
    UAthenaAccoladeListEntryWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTitle(const FText& TitleText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSource(const FText& SourceText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIcon(const UFortAccoladeItemDefinition* ItemDef);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCount(int32 Count);
    
    
    // Fix for true pure virtual functions not being implemented
};

