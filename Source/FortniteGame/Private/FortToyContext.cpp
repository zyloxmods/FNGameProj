#include "FortToyContext.h"

void UFortToyContext::PrintToMessageFeed(const FText& Message) {
}

FText UFortToyContext::PickToyOwnerNameStyle(AFortPlayerState* Instigator) {
    return FText::GetEmpty();
}

FString UFortToyContext::GetFilteredPlayerName(AFortPlayerState* Instigator) {
    return TEXT("");
}

FText UFortToyContext::FormatPlayerNameForDisplay(AFortPlayerState* Subject, EMessageFeedSubject SubjectType) {
    return FText::GetEmpty();
}

bool UFortToyContext::ConditionalPrintToMessageFeed(AFortPlayerState* Instigator, FVector MessageLocation, EMessageFeedRelationshipFilter RelationshipFilter, const FText& Message) {
    return false;
}

UFortToyContext::UFortToyContext() {
}

