#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "McpItemAware.h"
#include "EFortCollectionBookState.h"
#include "FortCollectionBookSectionState.h"
#include "FortCollectionBookPage.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortCollectionBookPage : public UObject, public IMcpItemAware {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString TemplateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString InstanceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName PageRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCollectionBookState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCollectionBookSectionState> SectionStates;
    
public:
    UFortCollectionBookPage();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortCollectionBookState GetSectionState(FName SectionId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortCollectionBookState GetPageState() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

